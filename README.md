# Independent-Allocator
This is a minimal, platform-independent bump allocator with CPU cache line alignment. Written in pure C.

## Features

- **Bump (linear) allocator** - the fastest allocation strategy
- **Cache line alignment** - all allocations aligned to 64 bytes
- **Platform independent** - pure C, no system calls, no external dependencies
- **Single-threaded** - designed for embedded systems or mathematical libraries

## Limitations

- Not suitable for small allocations (minimum aligned size is 64 bytes due to cache line alignment)
- Fixed maximum size (default 4KB, configurable via MAX_SIZE)

## Usage Example

```c
#include "ialloc.h"
#include <stdio.h>

typedef struct {
    uint32_t x, y, z;
} vec3;

int main() {
    // Allocate aligned vector
    vec3 *v = ialloc(sizeof(vec3));
    v->x = 1;
    v->y = 2;
    v->z = 3;
    
    return 0;
}
```
## Build

- `make`          - build executable and object file (into `build/`)
- `make run`       - run the executable
