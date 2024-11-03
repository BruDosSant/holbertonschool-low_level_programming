#include "main.h"

/**
 * reverse_array - reverse de content of any integre
 * @a: int 1
 * @n: int 2
 */

void reverse_array(int *a, int n)
{
	int c;
	int as = 0;
	int b = n - 1;

	while (as < b)
	{
		c = a[as];
		a[as] = a[b];
		a[b] = c;
		as++;
		b--;
	}
}
