
#ifndef BUS_HPP
#define BUS_HPP

#include "util.hpp"

struct Cpu;
struct Mmu;

struct Bus {
    Cpu& cpu;
    Mmu& mmu;

    Bus(Cpu& cpu, Mmu& mmu);

    void* map(u32 address);

    template<typename T>
    T peek(u32 address)
    {
#ifndef MMU_FAST
        u8 value[sizeof(T)];
        for (usize i = 0; i < sizeof(T); i++)
        {
            value[i] = *reinterpret_cast<u8*>(map(address + i));
        }
#else
        T* value = reinterpret_cast<T*>(map(address));
#endif
        return *reinterpret_cast<T*>(value);
    }

    template<typename T>
    void poke(u32 address, T value)
    {
#ifndef MMU_FAST
        for (usize i = 0; i < sizeof(T); i++)
        {
            *reinterpret_cast<u8*>(map(address + i)) = reinterpret_cast<u8*>(&value)[i];
        }
#else
        *reinterpret_cast<T*>(map(address)) = value;
#endif
    }
};

#endif
