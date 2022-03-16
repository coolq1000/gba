
#ifndef CPU_HPP
#define CPU_HPP

#include "arm/arm.hpp"
#include "thumb/thumb.hpp"
#include "bus/bus.hpp"

struct Cpu {
    Bus& bus;
    Arm arm;
    Thumb thumb;

    Cpu(Bus& bus);
};

#endif
