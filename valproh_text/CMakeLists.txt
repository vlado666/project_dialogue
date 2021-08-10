cmake_minimum_required(VERSION 3.10)

project(goodbye)

add_executable(mainVP main.cpp)

add_subdirectory(goodbye)

target_link_libraries(mainVP PUBLIC goodbye_lib)

add_dependencies(mainVP goodbye_lib)