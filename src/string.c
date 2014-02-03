#include "include/string.h"

size_t 
strlen(const char *s)
{
	const char * src = s;
	while(*s){
		s++;
	}
	return s - src;
}

void *
memcpy(void *dest, const void *src, size_t n)
{
	char *dst0 = dest;
	const char *src0 = src;
	while (n--)
	{
		*dst0++ = *src0++;
	}
	return dest;
}
