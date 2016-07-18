cmake_minimum_required(VERSION 2.6)

project(SwEngine)

file(GLOB sw_engine_sources
    "src/*.h"
    "src/*.cpp"
)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Threads REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
add_library(SwEngine SHARED ${sw_engine_sources})

if(THREADS_HAVE_PTHREAD_ARG)
  set_property(TARGET SwEngine PROPERTY COMPILE_OPTIONS "-pthread")
  set_property(TARGET SwEngine PROPERTY INTERFACE_COMPILE_OPTIONS "-pthread")
endif()
if(CMAKE_THREAD_LIBS_INIT)
  target_link_libraries(SwEngine "${CMAKE_THREAD_LIBS_INIT}")
endif()







