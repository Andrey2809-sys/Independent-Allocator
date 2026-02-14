#ifndef INDEPENDENT_ALLOCATOR
#define INDEPENDENT_ALLOCATOR

#include <stdint.h>

#define align(size, bytes) ((size + (bytes-1)) & ~(bytes-1))

#define MAX_SIZE 4096
#define CPU_CASHLINE_SIZE 64

void *ialloc(uint16_t size);

#endif