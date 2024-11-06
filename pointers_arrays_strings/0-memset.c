#include "main.h"

void *mi_memset(void *dest, int valor, unsigned int n)
{
	unsigned char *ptr = (unsigned char *)dest;

	for (unsigned int i = 0; i < n; i++)
	{
		ptr[i] = (unsigned char)valor;
	}

	return dest;
}
