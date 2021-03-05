project(loader_test)
cmake_minimum_required(VERSION 3.10)


set(CMAKE_CXX_STANDARD 17)


add_executable(${PROJECT_NAME}  ./loader_test.cpp)
target_link_libraries(${PROJECT_NAME} singleton_lib  dyn_test_3 ${CMAKE_DL_LIBS})