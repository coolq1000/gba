
#ifndef CPU_HPP
#define CPU_HPP

#include "arm/arm.hpp"
#include "thumb/thumb.hpp"

struct Cpu {
    Arm arm;
    Thumb thumb;
};

#endif
