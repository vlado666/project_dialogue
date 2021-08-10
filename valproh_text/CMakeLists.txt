cmake_minimum_required(VERSION 3.10)

project(goodbye)

add_executable(main main.cpp)

add_subdirectory(goodbye)

target_link_libraries(main PUBLIC goodbye)

add_dependencies(main goodbye)