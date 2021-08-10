cmake_minimum_required(VERSION 3.10)
project(PPProject)

add_executable(mainP main.cpp)
add_subdirectory(biscuit)
target_link_libraries(mainP PUBLIC libbiscuit)
add_dependencies(mainP libbiscuit)


target_include_directories(mainP PUBLIC biscuit)