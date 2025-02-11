# this is a comment
cmake_minimum_required(VERSION 3.20)

# first we set the project
project(Firstcmake)
set(CMAKE_CXX_STANDARD 17)
find_package(fmt CONFIG REQUIRED)

add_executable(hello main.cpp)
target_link_libraries(hello fmt::fmt)
