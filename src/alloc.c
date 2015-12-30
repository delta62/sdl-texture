#include <stdlib.h>
#include "alloc.h"
#include "error.h"

void *sn_alloc(size_t size)
{
    void *ptr = malloc(size);
    if (ptr == NULL)
    {
        sn_abort("Insufficient memory");
    }

    return ptr;
}

void sn_free(void *ptr)
{
    free(ptr);
}
