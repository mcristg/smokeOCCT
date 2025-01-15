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
    else()
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


find_package(Qt5 COMPONENTS Core REQUIRED)
find_package(Qt5 COMPONENTS Widgets QUIET)

find_package(Smoke)

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

find_package(OpenCASCADE REQUIRED)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkernel" tkernel)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkmath" tkmath)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkg2d" tkg2d)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkg3d" tkg3d)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkgeombase" tkgeombase)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkbrep" tkbrep)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkgeomalgo" tkgeomalgo)
macro_optional_add_bindings(OpenCASCADE_FOUND "tktopalgo" tktopalgo)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkshhealing" tkshhealing)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkprim" tkprim)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkhlr" tkhlr)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkbo" tkbo)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkmesh" tkmesh)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkbool" tkbool)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkfillet" tkfillet)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkfeat" tkfeat)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkoffset" tkoffset)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkservice" tkservice)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkv3d" tkv3d)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkopengl" tkopengl)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkmeshvs" tkmeshvs)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkcdf" tkcdf)
macro_optional_add_bindings(OpenCASCADE_FOUND "tklcaf" tklcaf)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkbinl" tkbinl)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkcaf" tkcaf)
macro_optional_add_bindings(OpenCASCADE_FOUND "tktobj" tktobj)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkxmll" tkxmll)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkstdl" tkstdl)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkbin" tkbin)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkbintobj" tkbintobj)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkvcaf" tkvcaf)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkxml" tkxml)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkxmltobj" tkxmltobj)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkstd" tkstd)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkexpress" tkexpress)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkde" tkde)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkxsbase" tkxsbase)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkxcaf" tkxcaf)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkdeiges" tkdeiges)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkrwmesh" tkrwmesh)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkdeply" tkdeply)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkdegltf" tkdegltf)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkdeobj" tkdeobj)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkdestl" tkdestl)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkxmlxcaf" tkxmlxcaf)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkbinxcaf" tkbinxcaf)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkdevrml" tkdevrml)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkdecascade" tkdecascade)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkdestep" tkdestep)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkhdestep" tkhdestep)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkdraw" tkdraw)
macro_optional_add_bindings(OpenCASCADE_FOUND "tktoptest" tktoptest)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkviewertest" tkviewertest)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkdcaf" tkdcaf)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkopengltest" tkopengltest)
macro_optional_add_bindings(OpenCASCADE_FOUND "tktobjdraw" tktobjdraw)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkxsdraw" tkxsdraw)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkxsdrawgltf" tkxsdrawgltf)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkxsdrawiges" tkxsdrawiges)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkxsdrawobj" tkxsdrawobj)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkxsdrawply" tkxsdrawply)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkxsdrawstep" tkxsdrawstep)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkxsdrawstl" tkxsdrawstl)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkxsdrawvrml" tkxsdrawvrml)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkxdedraw" tkxdedraw)
macro_optional_add_bindings(OpenCASCADE_FOUND "tkqadraw" tkqadraw)

# Taken from https://gitlab.kitware.com/cmake/community/-/wikis/FAQ#can-i-do-make-uninstall-with-cmake
# uninstall target
if(NOT TARGET uninstall)
  configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake_uninstall.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake"
    IMMEDIATE @ONLY)

  add_custom_target(uninstall
    COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake)
endif()

macro_display_bindings_log()
macro_display_feature_log()
