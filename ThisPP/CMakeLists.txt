project(PPProject)

add_executable(main main.cpp)
add_subdirectory(biscuit)
target_link_libraries(main PUBLIC libbiscuit)
add_dependencies(main libbiscuit)
cmake_minimum_required(VERSION 3.10)