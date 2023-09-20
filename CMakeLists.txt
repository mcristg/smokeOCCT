cmake_minimum_required(VERSION 3.18.4)
project(SMOKEOCCT)

function(get_smokegen_args RESULT_NAME moduleName)
    set(clangOptions "-clangOptions")
    if(NOT WIN32)
        list(APPEND clangOptions "-fPIC")
      if (SMOKEGEN_OPTION) 
         string(REPLACE " " ";" SMOKEGEN_OPTION ${SMOKEGEN_OPTION})
         list(APPEND clangOptions ${SMOKEGEN_OPTION})
      endif()        
    endif()

    if(MSVC AND MSVC_VERSION GREATER 1600)
        # The features that clang reports and the features that Qt will detect at
        # compile time must match.  MSVC2015 supports c++14, but does not support
        # only the c++11 subset that clang would turn on with -std=c++11.  When
        # running inside smokegen, Qt's compiler detection sees the compiler as
        # clang under msvc.
        list(APPEND clangOptions "-std=c++14")
    elseif(${Qt5Core_VERSION} VERSION_GREATER 5.15.2)
        # Qt >=5.7.0 requires c++11
        list(APPEND clangOptions "-std=c++14")
    endif()


    set(smokegenArgs
        -config "${CMAKE_CURRENT_BINARY_DIR}/config.xml"
        -smokeconfig "${CMAKE_CURRENT_SOURCE_DIR}/smokeconfig.xml"
        -L "${CMAKE_BINARY_DIR}"
        ${clangOptions}
        -- ${CMAKE_CURRENT_SOURCE_DIR}/${moduleName}_includes.h
    )
    set(${RESULT_NAME} ${smokegenArgs} PARENT_SCOPE)
    
endfunction()

function(create_configure_files dirs)
    set(qt_dirs)
    foreach(filename ${dirs})
        if("${filename}" MATCHES "\\.framework/?$")
            string(REGEX REPLACE "/[^/]+\\.framework" "" framework_path "${filename}")
            set(qt_dirs "${qt_dirs}        <framework>${framework_path}</framework>\n")
        else()
            set(qt_dirs "${qt_dirs}        <dir>${filename}</dir>\n")
        endif()
    endforeach(filename)

    if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/config.xml.cmake)
        configure_file(${CMAKE_CURRENT_SOURCE_DIR}/config.xml.cmake ${CMAKE_CURRENT_BINARY_DIR}/config.xml @ONLY)
    endif()
    if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/qt-config.xml.cmake)
        configure_file(${CMAKE_CURRENT_SOURCE_DIR}/qt-config.xml.cmake ${CMAKE_CURRENT_BINARY_DIR}/qt-config.xml @ONLY)
    endif()
endfunction()


add_definitions(-DSMOKE_BUILDING)

if(MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /MP")
endif()

find_package(Vulkan REQUIRED)
find_package(Qt5 COMPONENTS Core REQUIRED)
find_package(Qt5
    COMPONENTS
    DBus
    Gui
    Help
    Multimedia
    MultimediaWidgets
    Network
    OpenGL
    Positioning
    PrintSupport
    Qml
    Quick
    QuickWidgets
    Sql
    Svg
    Test
    UiTools
    VulkanSupport
    WebChannel
    WebEngineCore
    WebEngineWidgets
    Widgets
    3DAnimation
    3DCore
    3DExtras
    3DInput
    3DLogic
    3DRender
    Xml
    XmlPatterns
    QUIET
)

string(REPLACE "." ";" VERSION_LIST ${Qt5Core_VERSION})
list(GET VERSION_LIST 0 VERSION_MAJOR)
list(GET VERSION_LIST 1 VERSION_MINOR)
list(GET VERSION_LIST 2 VERSION_PATCH)



find_package(Smoke)

if (Qt5_DIR)
   string(REPLACE "/lib/cmake/Qt5" "" Qt_ROOT_DIR ${Qt5_DIR})
endif()   

if(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
set(CMAKE_INSTALL_PREFIX ${SMOKE_INSTALL_PREFIX}
    CACHE PATH "Install prefix" FORCE)
endif(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${SMOKE_CMAKE_MODULE_DIR}")

include(MacroOptionalFindPackage)
include(MacroOptionalAddBindings)
include(MacroLogFeature)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${SMOKE_INCLUDE_DIR})

# add the automatically determined parts of the RPATH
# which point to directories outside the build tree to the install RPATH
set(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)
set(CMAKE_MACOSX_RPATH 1)

# the RPATH to be used when installing, but only if it's not a system directory
LIST(FIND CMAKE_PLATFORM_IMPLICIT_LINK_DIRECTORIES "${CMAKE_INSTALL_PREFIX}/lib" isSystemDir)
IF("${isSystemDir}" STREQUAL "-1")
   SET(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
ENDIF("${isSystemDir}" STREQUAL "-1")

# Set LIB_INSTALL_DIR if it's not set already.
if (NOT LIB_INSTALL_DIR)
    set (LIB_INSTALL_DIR ${CMAKE_INSTALL_PREFIX}/lib${LIB_SUFFIX})
endif (NOT LIB_INSTALL_DIR)

## disable deprecation waringins
if(CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-deprecated-declarations")
endif()

set(QTDEFINES_FILE ${CMAKE_CURRENT_BINARY_DIR}/qtdefines)

if(OpenCASCADE_DIR)
   find_package(OpenCASCADE REQUIRED)
   macro_optional_add_bindings(OpenCASCADE_FOUND "TKernel" TKernel)
   macro_optional_add_bindings(OpenCASCADE_FOUND "TKMath" TKMath)
   macro_optional_add_bindings(OpenCASCADE_FOUND "TKG2d" TKG2d)
   macro_optional_add_bindings(OpenCASCADE_FOUND "TKG3d" TKG3d)
   macro_optional_add_bindings(OpenCASCADE_FOUND "TKGeomBase" TKGeomBase)
   macro_optional_add_bindings(OpenCASCADE_FOUND "TKBRep" TKBRep)
   
endif()


macro_display_bindings_log()
macro_display_feature_log()
