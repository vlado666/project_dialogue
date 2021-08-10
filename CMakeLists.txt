cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_COMPILER /usr/bin/g++)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(all)

add_executable(allmain main.cpp)

add_subdirectory(gleb)
add_subdirectory(ThisPP)
add_subdirectory(valproh_text)
add_subdirectory(vladcookies)

add_dependencies(allmain my_lib_gleb) 
add_dependencies(allmain libbiscuit)
add_dependencies(allmain goodbye_lib)
add_dependencies(allmain my_lib_vlad) 

target_link_libraries(allmain PUBLIC my_lib_gleb)
target_link_libraries(allmain PUBLIC libbiscuit)
target_link_libraries(allmain PUBLIC goodbye_lib)
target_link_libraries(allmain PUBLIC my_lib_vlad)

target_include_directories(allmain 
                           PUBLIC vladcookies/
                           PUBLIC gleb/
                           PUBLIC ThisPP/
                           PUBLIC valproh_text/)
