cmake_minimum_required(VERSION 3.15)

project(X)

add_subdirectory(A)

add_executable(X main.cpp)
target_link_libraries(X PRIVATE A)
