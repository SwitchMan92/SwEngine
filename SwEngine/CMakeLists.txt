cmake_minimum_required(VERSION 2.6)

project(SwEngine)

file(GLOB sw_engine_sources
    "src/*.h"
    "src/*.cpp"
)

add_executable(SwEngine ${sw_engine_sources})



