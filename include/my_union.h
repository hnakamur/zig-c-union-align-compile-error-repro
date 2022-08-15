#include <stdint.h>

// simplified version of
// https://github.com/axboe/liburing/blob/15cc446cb8b0caa5c939423d31182eba66141539/src/include/liburing/io_uring.h#L76-L86
//
// $ zig build test
// ./zig-cache/o/c7bc553a7c3e6c8b2fd5a382f819676f/cimport.zig:139:5: error: TODO implement field alignment syntax for unions. https://github.com/ziglang/zig/issues/3125
//     f1: u64 align(8),
//     ^
// $ zig version
// 0.10.0-dev.3559+d2342370f
//
// It compiles successfully if we change the length of f2 from zero to one:
//
// typedef union
// {
//     uint64_t f1;
//     uint8_t f2[1];
// } my_union;

typedef union
{
    uint64_t f1;
    uint8_t f2[0];
} my_union;
