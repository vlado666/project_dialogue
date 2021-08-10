cmake_minimum_required(VERSION 3.10)

project(vladickmain)

add_executable(mainV main.cpp)

add_subdirectory(my_lib_vlad)

target_link_libraries(mainV PUBLIC my_lib_vlad)

add_dependencies(mainV my_lib_vlad)