#include "cpu/thumb/thumb.hpp"

Thumb::Thumb(Bus& bus) : bus(bus) {}

void Thumb::fetch() {
    instruction = bus.peek<u32>(0x0);
}
