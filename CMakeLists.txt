
cmake_minimum_required(VERSION 3.14)
project(Added LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON )

add_executable(Cplus2 main.cpp )
add_subdirectory(lib)
target_link_libraries(Cplus2  SimpleMath)
target_link_libraries(Cplus2  ListOp)

add_subdirectory(test)