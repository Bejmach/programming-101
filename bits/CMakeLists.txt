cmake_minimum_required(VERSION 3.29.6)
project(app)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Main file
set(MAIN_PATH "${CMAKE_SOURCE_DIR}/main.cpp")

file(GLOB_RECURSE PROJECT_SOURCES CONFIGURE_DEPENDS
	"${CMAKE_SOURCE_DIR}/src/*.cpp"
)

add_library(project_lib ${PROJECT_SOURCES})

target_include_directories(project_lib PUBLIC
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
	$<INSTALL_INTERFACE:include>
)

add_executable(${PROJECT_NAME} ${MAIN_PATH})
target_link_libraries(${PROJECT_NAME} PRIVATE project_lib)
