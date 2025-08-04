cmake_minimum_required(VERSION 3.10)
project(HelloWorld)

add_executable(hello-world main.cpp)
target_link_libraries(hello-world config++)
