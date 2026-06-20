#include <stdint.h>
#include <stddef.h>

// Direct declaration, no header needed
extern "C" void parse(const uint8_t* data, size_t size);

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    parse(data, size);
    return 0;
}
