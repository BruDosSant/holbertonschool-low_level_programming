#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *ptr = (unsigned char *)s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		ptr[i] = (unsigned char)b;
	}

	return s;
}
