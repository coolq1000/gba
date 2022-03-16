
#ifndef ARM_HPP
#define ARM_HPP

#include "bus/bus.hpp"
#include "util.hpp"

struct Arm {
    Bus& bus;

    Arm(Bus& bus);
};

#endif
