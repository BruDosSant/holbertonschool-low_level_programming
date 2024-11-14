#include "maun.h"

char *create_array(unsigned int size, char c)
{
	char *a;
	a = malloc(size * sizeof(char));

	unsigned int i;
	for(i = 0; i <= size; i++)
	{
		a[i] = c;
	}

	return (a);
}
