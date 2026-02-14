#include "include/ialloc.h"
#include <stdio.h>

typedef struct {
    uint32_t x, y, z;
} vec3;

int main()
{
    vec3 *v = ialloc(sizeof(vec3));
    v->x = 1;
    v->y = 2;
    v->z = 3;
    printf("vec->x:%d\nvec->y:%d\nvec->z:%d\n", v->x, v->y, v->z);

    int *x = ialloc(sizeof(int));
    *x = 4;

    return 0;
}