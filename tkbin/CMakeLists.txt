create_configure_files("${OpenCASCADE_INCLUDE_DIR};${CMAKE_CURRENT_SOURCE_DIR}")
get_smokegen_args(smokegenArgs tkbin)
run_smokegen(1 "${smokegenArgs}")
get_smokegen_output_files(smoketkbin_LIB_SRCS 1)

set(CMAKE_CXX_FLAGS "-I${OpenCASCADE_INCLUDE_DIR} -I${CMAKE_CURRENT_SOURCE_DIR}")

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

add_library(smoketkbin SHARED ${smoketkbin_LIB_SRCS})

link_directories(${OpenCASCADE_LIBRARY_DIR})

target_link_libraries(smoketkbin
    smoketkcaf
    smoketkbinl
    ${OpenCASCADE_LIBRARIES}
)

set(OCCT_VERSION ${OpenCASCADE_MAJOR_VERSION}.${OpenCASCADE_MINOR_VERSION}.${OpenCASCADE_MAINTENANCE_VERSION})

set_target_properties(smoketkbin
    PROPERTIES
    VERSION ${OCCT_VERSION}
    SOVERSION ${OpenCASCADE_MAJOR_VERSION}
    CXX_STANDARD 14
)

install(TARGETS smoketkbin LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
    # Realign the stack, for compatibility with an older ABI.
    if (CMAKE_COMPILER_IS_GNUCXX)
	set_target_properties(smoketkbin PROPERTIES COMPILE_FLAGS -mstackrealign)
    endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smoketkbin PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

if(GENERATE_SOURCE)
  install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../tkbin_smoke.h DESTINATION share/smokeOCCT-${OCCT_VERSION}/tkbin)
  install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/tkbin_includes.h DESTINATION share/smokeOCCT-${OCCT_VERSION}/tkbin)
  install(FILES ${smoketkbin_LIB_SRCS} DESTINATION share/smokeOCCT-${OCCT_VERSION}/tkbin)
  install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/cmake/CMakeLists.txt DESTINATION share/smokeOCCT-${OCCT_VERSION}/tkbin) 
endif()  

