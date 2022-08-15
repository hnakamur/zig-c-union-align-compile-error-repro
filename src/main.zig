const std = @import("std");
const c = @cImport({
    @cInclude("my_union.h");
});

const testing = std.testing;

test "basic add functionality" {
    var u: c.my_union = undefined;
    _ = u;
}
