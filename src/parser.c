#include <string.h>
#include <stdint.h>
#include <stddef.h>

void parse(const uint8_t* data, size_t size) {
    char buffer[64];
    memcpy(buffer, data, size);
    // Prevent dead‑code elimination – touch the buffer
    // Use a volatile variable so the compiler cannot remove this.
    volatile char sink = buffer[0];
    (void)sink;  // suppress unused warning
}
