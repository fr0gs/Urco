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
