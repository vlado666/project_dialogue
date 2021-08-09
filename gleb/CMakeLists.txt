cmake_minimum_required(VERSION 3.10)

project(Gleb)

add_executable(main main.c)

add_subdirectory(lib_gleb)


target_link_libraries(main PUBLIC my_lib_gleb)

add_dependencies(main my_lib_gleb)



