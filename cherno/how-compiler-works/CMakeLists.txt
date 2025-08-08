add_executable(how-compiler-works main.cpp)

add_library(math math.cpp)

target_link_libraries(how-compiler-works math)