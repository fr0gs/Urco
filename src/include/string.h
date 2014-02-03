#ifndef __STRING_FTW
#define __STRING_FTW
#endif

#include <stddef.h>

extern size_t strlen(const char *s);
extern void *memcpy(void *dest, const void *src, size_t n);
extern void *memset(void *s, int c, size_t n);

