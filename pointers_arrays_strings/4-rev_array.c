#include "main.h"

/**
 * reverse_array - reverse de content of any integre
 * @a: int 1
 * @n: int 2
 */

void reverse_array(int *a, int n)
{
	int i;
	int h;

	for (i = 0; i < (n / 2); i++)
	{
		h = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = h;
	}
}
