#include "gba.hpp"

Gba::Gba() : bus(cpu, mmu), cpu(bus), mmu(bus) {}
