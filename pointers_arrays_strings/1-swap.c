#include "main.h"

/**
 * swap_int - intercambia valor de dos int
 * @a: int a
 * @b: int b
 */
void swap_int(int *a, int *b)
{
	int *c = 0;

	*c = *a;
	*a = *b;
	*b = *c;
}
