cmake_minimum_required(VERSION 3.29.6)
project(hello_world)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(PROJECT_TESTS OFF)

# External dependencies
#add_subdirectory(${CMAKE_SOURCE_DIR}/ext/)

# Include dependencies
#include(${CMAKE_SOURCE_DIR}/ext/ext.cmake)

# --- Sources ---
#file(GLOB_RECURSE PROJECT_SOURCES CONFIGURE_DEPENDS
#   "${CMAKE_SOURCE_DIR}/src/*.cpp"
#)

set(MAIN_PATH "${CMAKE_SOURCE_DIR}/main.cpp")

# Shared library
#add_library(project_lib ${PROJECT_SOURCES})
#target_include_directories(project_lib PUBLIC
#    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
#   $<INSTALL_INTERFACE:include>
#)

#target_link_libraries(project_lib PUBLIC ${EXTERNAL})

# Main executable
add_executable(${PROJECT_NAME} ${MAIN_PATH})
#target_link_libraries(${PROJECT_NAME} PRIVATE project_lib)

# Test executable
#if(PROJECT_TESTS)
#	add_subdirectory(${CMAKE_SOURCE_DIR}/ext/Catch2-3.8.1)
#   file(GLOB_RECURSE TESTS_SOURCES CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/tests/*.cpp")
#
#   enable_testing()
#   include(Catch)
#
#   add_executable(breach_tests ${TESTS_SOURCES})
#   target_link_libraries(breach_tests PRIVATE project_lib Catch2::Catch2WithMain)
#
#   catch_discover_tests(breach_tests)
#endif()
