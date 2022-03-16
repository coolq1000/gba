cmake_minimum_required(VERSION 3.21)
project(Gba)

set(CMAKE_CXX_STANDARD 20)

set(SOURCE src/main.cpp include/cpu/cpu.hpp src/cpu/cpu.cpp include/cpu/arm/arm.hpp include/cpu/thumb/thumb.hpp include/util.hpp src/cpu/thumb/thumb.cpp src/cpu/arm/arm.cpp include/bus/bus.hpp src/bus/bus.cpp include/gba.hpp src/gba.cpp include/mmu/mmu.hpp src/mmu/mmu.cpp include/rom/rom.hpp)

add_executable(Gba ${SOURCE})

add_subdirectory(deps/fmt)

target_include_directories(Gba PRIVATE include)
target_include_directories(Gba PRIVATE deps/fmt/include)

target_link_libraries(Gba fmt)
