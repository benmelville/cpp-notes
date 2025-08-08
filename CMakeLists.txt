project(cpp-notes)

cmake_minimum_required(VERSION 3.23)

set(CMAKE_CXX_STANDARD 17)

find_package(Protobuf REQUIRED)

add_subdirectory(variables)
add_subdirectory(pointers)
add_subdirectory(protobuf)
add_subdirectory(cherno)
