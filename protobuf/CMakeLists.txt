set(PROTO_FILES ${CMAKE_CURRENT_SOURCE_DIR}/addressbook.proto)

# PROTO_SRCS and PROTO_HDRS are variables used to define the autogenerated files
protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS ${PROTO_FILES})

# Create a library from the auto-generated protobuf files
add_library(addressbook_proto ${PROTO_SRCS} ${PROTO_HDRS})
message(WARNING "proto libs ${Protobuf_INCLUDE_DIRS}")

# Link the protobuf library we just created against the source libraries includes
target_link_libraries(addressbook_proto PUBLIC ${Protobuf_LIBRARIES})
target_include_directories(addressbook_proto PUBLIC ${Protobuf_INCLUDE_DIRS})

add_executable(write-to-addressbook write-to-addressbook.cpp)

target_link_libraries(write-to-addressbook addressbook_proto)
target_include_directories(write-to-addressbook PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
