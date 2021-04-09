CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

PROJECT(task04)

file(GLOB sources "src/*.cpp")

add_executable(task04 ${sources})

target_include_directories(task04 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
