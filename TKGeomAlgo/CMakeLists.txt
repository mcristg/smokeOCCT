create_configure_files("${OpenCASCADE_INCLUDE_DIR};${CMAKE_CURRENT_SOURCE_DIR}")
get_smokegen_args(smokegenArgs tkgeomalgo)
run_smokegen(1 "${smokegenArgs}")
get_smokegen_output_files(smoketkgeomalgo_LIB_SRCS 1)

set(CMAKE_CXX_FLAGS "-I${OpenCASCADE_INCLUDE_DIR} -I${CMAKE_CURRENT_SOURCE_DIR}")

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

add_library(smoketkgeomalgo SHARED ${smoketkgeomalgo_LIB_SRCS})

link_directories(${OpenCASCADE_LIBRARY_DIR})

target_link_libraries(smoketkgeomalgo
    ${OpenCASCADE_LIBRARIES}
)

set_target_properties(smoketkgeomalgo
    PROPERTIES
    VERSION ${OpenCASCADE_MAJOR_VERSION}.${OpenCASCADE_MINOR_VERSION}.${OpenCASCADE_MAINTENANCE_VERSION}
    SOVERSION ${OpenCASCADE_MAJOR_VERSION}
    CXX_STANDARD 14
)

install(TARGETS smoketkgeomalgo LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
    # Realign the stack, for compatibility with an older ABI.
    if (CMAKE_COMPILER_IS_GNUCXX)
	set_target_properties(smoketkgeomalgo PROPERTIES COMPILE_FLAGS -mstackrealign)
    endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smoketkgeomalgo PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../tkgeomalgo_smoke.h DESTINATION include/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/tkgeomalgo.argnames.txt DESTINATION share/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/tkgeomalgo.typedefs.txt DESTINATION share/smoke)

