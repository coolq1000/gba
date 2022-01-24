
#ifndef THUMB_HPP
#define THUMB_HPP

#include "util.hpp"

struct Thumb {
    u16 instruction;

    void fetch();
    void decode();
    void execute();
};

#endif
