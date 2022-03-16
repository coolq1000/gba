#include "bus/bus.hpp"

Bus::Bus(Cpu& cpu, Mmu& mmu) : cpu(cpu), mmu(mmu) {}

void* Bus::map(u32 address) {
    return nullptr;
}
