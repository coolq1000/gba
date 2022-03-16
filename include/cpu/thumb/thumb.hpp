
#ifndef THUMB_HPP
#define THUMB_HPP

#include "bus/bus.hpp"
#include "util.hpp"

struct Thumb {
    Bus& bus;
    u16 instruction;

    Thumb(Bus& bus);

    void fetch();
    void decode();
    void execute();
};

#endif
