#include "main.h"

/**
 * print_square - ups i did it again
 */

void print_square(int size)
{
	int r, l;

	l = 0;

	if (size < 0)
		_putchar(10);
	while (l < size)
	{
		r = 0;
		while (r < size)
		{
			_putchar('#');
			r++;
		}
		{
			_putchar(10);
		}
		l++;
	}
}
