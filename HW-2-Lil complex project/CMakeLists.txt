cmake_minimum_required(VERSION 3.22 FATAL_ERROR)
project(HW2-Lil_complex_project)
include_directories(
	${PROJECT_SOURCE_DIR}/src
)
file(GLOB all_SRCS
        "${PROJECT_SOURCE_DIR}/include/*.h"
        "${PROJECT_SOURCE_DIR}/src/*.cpp"
        "${PROJECT_SOURCE_DIR}/main.cpp"
        )
add_executable(hierarhy ${all_SRCS})