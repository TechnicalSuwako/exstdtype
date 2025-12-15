#ifndef __EXSTDTYPE_H
#define __EXSTDTYPE_H

#include <stdint.h>

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef float f32;
typedef double f64;

typedef struct {
  i8 *items;
  i8 length;
  i8 capacity;
} ArrayI8;

typedef struct {
  i16 *items;
  i16 length;
  i16 capacity;
} ArrayI16;

typedef struct {
  i32 *items;
  i32 length;
  i32 capacity;
} ArrayI32;

typedef struct {
  i64 *items;
  i64 length;
  i64 capacity;
} ArrayI64;

typedef struct {
  u8 *items;
  u8 length;
  u8 capacity;
} ArrayU8;

typedef struct {
  u16 *items;
  u16 length;
  u16 capacity;
} ArrayU16;

typedef struct {
  u32 *items;
  u32 length;
  u32 capacity;
} ArrayU32;

typedef struct {
  u64 *items;
  u64 length;
  u64 capacity;
} ArrayU64;

typedef struct {
  char *chars;
  i32 length;
} String;

// 下記はC23のみの類だ
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
typedef unsigned _BitInt(4) uint4_t;
typedef signed _BitInt(4) int4_t;
typedef unsigned _BitInt(4) u4;
typedef signed _BitInt(4) i4;

#ifndef __SIZEOF_INT128__
typedef unsigned _BitInt(128) uint128_t;
typedef signed _BitInt(128) int128_t;
typedef unsigned _BitInt(128) u128;
typedef signed _BitInt(128) i128;
#endif
#endif

#endif // __EXSTDTYPE_H
