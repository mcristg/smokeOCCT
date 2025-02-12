create_configure_files("${OpenCASCADE_INCLUDE_DIR};${CMAKE_CURRENT_SOURCE_DIR};${Qt5Core_INCLUDE_DIRS};${Qt5Gui_INCLUDE_DIRS};${Qt5Widgets_INCLUDE_DIRS}")
get_smokegen_args(smokegenArgs tkqt3d)
run_smokegen(1 "${smokegenArgs}")
get_smokegen_output_files(smoketkqt3d_LIB_SRCS 1)

set(CMAKE_CXX_FLAGS "-I${OpenCASCADE_INCLUDE_DIR} -I${CMAKE_CURRENT_SOURCE_DIR}")

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

if(Qt5_FOUND)
  set(OCCWINDOW occwindow.cpp occview.cpp)
endif()

if (CMAKE_COMPILER_IS_GNUCXX)
   set(D_LINER_FLAGS "-Wl,--no-undefined" "-Wl,--no-allow-shlib-undefined")
endif()

add_library(smoketkqt3d SHARED ${smoketkqt3d_LIB_SRCS} ${OCCWINDOW})

link_directories(${OpenCASCADE_LIBRARY_DIR})

target_link_libraries(smoketkqt3d
    smoketkv3d
    ${OpenCASCADE_LIBRARIES}
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
    ${D_LINER_FLAGS}
)

set_property(TARGET smoketkqt3d PROPERTY AUTOMOC ON)

set(OCCT_VERSION ${OpenCASCADE_MAJOR_VERSION}.${OpenCASCADE_MINOR_VERSION}.${OpenCASCADE_MAINTENANCE_VERSION})

set_target_properties(smoketkqt3d
    PROPERTIES
    VERSION ${OCCT_VERSION}
    SOVERSION ${OpenCASCADE_MAJOR_VERSION}
    CXX_STANDARD 14
)

install(TARGETS smoketkqt3d LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
    # Realign the stack, for compatibility with an older ABI.
    if (CMAKE_COMPILER_IS_GNUCXX)
	set_target_properties(smoketkqt3d PROPERTIES COMPILE_FLAGS -mstackrealign)
    endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smoketkqt3d PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

if(GENERATE_SOURCE)
  install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../tkqt3d_smoke.h DESTINATION share/smokeOCCT-${OCCT_VERSION}/tkqt3d)
  install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/tkqt3d_includes.h DESTINATION share/smokeOCCT-${OCCT_VERSION}/tkqt3d)
  install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/occwindow.h DESTINATION share/smokeOCCT-${OCCT_VERSION}/tkqt3d)
  install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/occwindow.cpp DESTINATION share/smokeOCCT-${OCCT_VERSION}/tkqt3d)
  install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/occview.h DESTINATION share/smokeOCCT-${OCCT_VERSION}/tkqt3d)
  install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/occview.cpp DESTINATION share/smokeOCCT-${OCCT_VERSION}/tkqt3d)  
  install(FILES ${smoketkqt3d_LIB_SRCS} DESTINATION share/smokeOCCT-${OCCT_VERSION}/tkqt3d)
endif()

