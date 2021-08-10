cmake_minimum_required(VERSION 3.10)

project(Gleb)

add_executable(mainG main.cpp)

add_subdirectory(lib_gleb)

target_link_libraries(mainG PUBLIC my_lib_gleb)

add_dependencies(mainG my_lib_gleb)



