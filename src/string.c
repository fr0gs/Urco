#include "include/string.h"


/**
* strlen - returns the length of a string
*/
size_t 
strlen(const char *s)
{
	const char * src;
	for (src = s; *src != '\0'; ++src)
	/*returns the difference in bytes once
	it finds the null byte*/
	return src-s;
}


/*
* memcpy - copies n bytes from buffer pointed by src 
* to buffer pointed by dest.
*/
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


void *
memset(void *s, int c, size_t n)
{
	unsigned char *ret = s;
	while (n--)
	{
		*(ret++) = (unsigned char)c;
	}
	return s;
}
