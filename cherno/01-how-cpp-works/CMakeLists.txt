add_executable(how-cpp-works main.cpp)


add_library(logger log.cpp)

target_link_libraries(how-cpp-works logger)