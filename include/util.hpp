
#ifndef UTIL_HPP
#define UTIL_HPP

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

/* object ids */
#define OBJ_ID static Id index = 0; Id id = index++

/* bit operations */
#define BIT(x) (1 << (x))
#define MASK(x) (~BIT(x))

/* type ranges */
#define U8_MAX  UINT8_MAX
#define U16_MAX UINT16_MAX
#define U32_MAX UINT32_MAX
#define U64_MAX UINT64_MAX

#define I8_MAX  INT8_MAX
#define I16_MAX INT16_MAX
#define I32_MAX INT32_MAX
#define I64_MAX INT64_MAX

/* types */
using u8    = uint8_t;
using u16   = uint16_t;
using u32   = uint32_t;
using u64   = uint64_t;
using usize = size_t;

using i8    = int8_t;
using i16   = int16_t;
using i32   = int32_t;
using i64   = int64_t;
using isize = ptrdiff_t;

using f32 = float;

using Id = u32;

#endif
