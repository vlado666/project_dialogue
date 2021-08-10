cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_COMPILER g++)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_STANDARD_REQUIRED True)

project(main)

add_executable(main main.c)

add_subdirectory(my_lib_vlad)

target_link_libraries(main PUBLIC my_lib_vlad)

add_dependencies(main my_lib_vlad)