cmake_minimum_required(VERSION 3.21)
project(Gba)

set(CMAKE_CXX_STANDARD 20)

set(SOURCE src/main.cpp include/cpu/cpu.hpp src/cpu/cpu.cpp include/cpu/arm/arm.hpp include/cpu/thumb/thumb.hpp include/util.hpp src/cpu/thumb/thumb.cpp)

add_executable(Gba ${SOURCE})

target_include_directories(Gba PRIVATE include)
