
#ifndef MMU_HPP
#define MMU_HPP

#include <memory>
#include "bus/bus.hpp"
#include "util.hpp"

const usize BIOS_ADDR       = 0x0000;
const usize BIOS_SIZE       = 0x4000;
const usize WRAM_BOARD_ADDR = 0x4000;
const usize WRAM_BOARD_SIZE = 0x40000;
const usize WRAM_CHIP_ADDR  = 0x3000000;
const usize WRAM_CHIP_SIZE  = 0x8000;

struct Mmu {
    Bus& bus;

    std::unique_ptr<u8> bios;
    std::unique_ptr<u8> wram_board;
    std::unique_ptr<u8> wram_chip;

    Mmu(Bus& bus);

    void* map(u32 address);
};

#endif
