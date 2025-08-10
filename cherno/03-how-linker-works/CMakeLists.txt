add_executable(how-linker-works math.cpp)

add_library(03logger Log.cpp)

target_link_libraries(how-linker-works 03logger)