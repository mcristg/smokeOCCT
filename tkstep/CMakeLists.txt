create_configure_files("${OpenCASCADE_INCLUDE_DIR};${CMAKE_CURRENT_SOURCE_DIR}")
get_smokegen_args(smokegenArgs tkstep)
run_smokegen(10 "${smokegenArgs}")
get_smokegen_output_files(smoketkstep_LIB_SRCS 10)

set(CMAKE_CXX_FLAGS "-I${OpenCASCADE_INCLUDE_DIR} -I${CMAKE_CURRENT_SOURCE_DIR}")

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

add_library(smoketkstep SHARED ${smoketkstep_LIB_SRCS})

link_directories(${OpenCASCADE_LIBRARY_DIR})

target_link_libraries(smoketkstep
    smoketkernel
    smoketkmath
    smoketkg2d
    smoketkg3d
    smoketkgeombase
    smoketkbrep
    smoketkgeomalgo
    smoketktopalgo
    smoketkshhealing
    smoketkxsbase
    smoketkstepbase
    smoketkstepattr
    smoketkstep209
    ${OpenCASCADE_LIBRARIES}
)

set_target_properties(smoketkstep
    PROPERTIES
    VERSION ${OpenCASCADE_MAJOR_VERSION}.${OpenCASCADE_MINOR_VERSION}.${OpenCASCADE_MAINTENANCE_VERSION}
    SOVERSION ${OpenCASCADE_MAJOR_VERSION}
    CXX_STANDARD 14
)

install(TARGETS smoketkstep LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
    # Realign the stack, for compatibility with an older ABI.
    if (CMAKE_COMPILER_IS_GNUCXX)
	set_target_properties(smoketkstep PROPERTIES COMPILE_FLAGS -mstackrealign)
    endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smoketkstep PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../tkstep_smoke.h DESTINATION include/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/tkstep.argnames.txt DESTINATION share/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/tkstep.typedefs.txt DESTINATION share/smoke)

