project(dyn_test_3)
cmake_minimum_required(VERSION 3.10)


set(CMAKE_CXX_STANDARD 17)




add_library(${PROJECT_NAME} SHARED ./dyn_test_3.cpp)
target_link_libraries(${PROJECT_NAME} singleton_lib)