cmake_minimum_required(VERSION 3.29.6)
project(app)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Main file
set(MAIN_PATH "${CMAKE_SOURCE_DIR}/main.cpp")

add_executable(${PROJECT_NAME} ${MAIN_PATH})
