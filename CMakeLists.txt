project(singleton_lib)
cmake_minimum_required(VERSION 3.10)


set(CMAKE_CXX_STANDARD 17)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

include_directories(${CMAKE_SOURCE_DIR}/include)

FILE(GLOB_RECURSE SRC_LISTS ${CMAKE_SOURCE_DIR}/src/*.cpp ${CMAKE_SOURCE_DIR}/src/*.c)
FILE(GLOB_RECURSE HEADER_LISTS ${CMAKE_SOURCE_DIR}/include/*.hpp ${CMAKE_SOURCE_DIR}/include/*.h)

add_library(${PROJECT_NAME} ${SRC_LISTS} ${HEADER_LISTS})

add_subdirectory(./test)