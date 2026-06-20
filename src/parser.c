void parse(const uint8_t* data, size_t size) {
    char buffer[16];
    if (size > 16) return;   // prevent overflow
    memcpy(buffer, data, size);
    volatile char sink = buffer[0];
    (void)sink;
}
