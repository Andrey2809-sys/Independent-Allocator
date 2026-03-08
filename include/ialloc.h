#ifndef INDEPENDENT_ALLOCATOR
#define INDEPENDENT_ALLOCATOR

#include <stdint.h>

#define align(size, bytes) ((size + (bytes-1)) & ~(bytes-1))

#define MAX_SIZE 4096
#define CPU_CASHLINE_SIZE 64

extern uint16_t ptr;
__attribute__((aligned(CPU_CASHLINE_SIZE))) extern char memory[MAX_SIZE]; 

void *ialloc(uint16_t size);
void  reset();

#endif