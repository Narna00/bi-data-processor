#include <string.h>
#include <stdint.h>
#include <stddef.h>

void parse(const uint8_t* data, size_t size) {
    char buffer[64];
    memcpy(buffer, data, size);
    // Force the compiler to keep the buffer on the stack
    volatile char sink = buffer[0];
    (void)sink;  // quiet unused warning
}
