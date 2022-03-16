#include "mmu/mmu.hpp"

#include <fmt/core.h>

Mmu::Mmu(Bus& bus) : bus(bus) {
    /* allocate memory */
    bios = std::make_unique<u8>(BIOS_SIZE);
    wram_board = std::make_unique<u8>(WRAM_BOARD_SIZE);
    wram_chip = std::make_unique<u8>(WRAM_CHIP_SIZE);
}

void* Mmu::map(u32 address) {
    /* map memory ranges */
    if (WITHIN_RANGE(address, BIOS_ADDR, BIOS_SIZE)) {
        return &bios.get()[address - BIOS_ADDR];
    } else if (WITHIN_RANGE(address, WRAM_BOARD_ADDR, WRAM_BOARD_SIZE)) {
        return &wram_board.get()[address - WRAM_BOARD_ADDR];
    } else if (WITHIN_RANGE(address, WRAM_CHIP_ADDR, WRAM_CHIP_SIZE)) {
        return &wram_chip.get()[address - WRAM_CHIP_ADDR];
    }

    /* undefined memory */
    throw std::runtime_error(fmt::format("unable to map mmu address `{:x}`", address));
}
