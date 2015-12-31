#ifndef SN_ALLOC_H
#define SN_ALLOC_H

#include <stddef.h>

void *sn_alloc(size_t size);

void sn_free(void *ptr);

#endif
