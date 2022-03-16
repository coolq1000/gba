
#ifndef GBA_HPP
#define GBA_HPP

#include "cpu/cpu.hpp"
#include "mmu/mmu.hpp"
#include "bus/bus.hpp"

struct Gba {
    Cpu cpu;
    Mmu mmu;
    Bus bus;

    Gba();
};

#endif
