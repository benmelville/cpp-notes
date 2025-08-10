add_executable(static main.cpp)


add_library(static-int static.cpp)

target_link_libraries(static static-int)