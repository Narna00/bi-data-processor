#include <string.h>
#include <stdint.h>
#include <stddef.h>

void parse(const uint8_t* data, size_t size) {
    char buffer[16];               // small buffer → easy overflow
    memcpy(buffer, data, size);
    volatile char sink = buffer[0]; // prevents removal of the copy
    (void)sink;
}
