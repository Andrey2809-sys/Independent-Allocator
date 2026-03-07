#include "./ialloc.h"

void *ialloc(uint16_t size)
{
    if (size > MAX_SIZE) {
        return NULL;
    }
    if (size > (UINT16_MAX - ptr)) {
        return NULL;
    }
    void *allocate_ptr = memory + ptr;
    
    ptr += align(size, CPU_CASHLINE_SIZE);

    return allocate_ptr;
}

void reset()
{
    ptr = 0;
}
