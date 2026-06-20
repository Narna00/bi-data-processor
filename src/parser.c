#include <string.h>
#include <stdint.h>
#include <stddef.h>

// Public API
void parse(const uint8_t* data, size_t size) {
    char buffer[64];
    // VULNERABILITY: no bounds check; size can be > 64
    memcpy(buffer, data, size);
}
