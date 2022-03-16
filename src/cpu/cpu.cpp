#include "cpu/cpu.hpp"


Cpu::Cpu(Bus& bus) : bus(bus), arm(bus), thumb(bus) {

}
