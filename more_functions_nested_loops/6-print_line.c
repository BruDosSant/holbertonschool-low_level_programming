#include "main.h"

void print_line(int n)
{
	int cant = 0;

	while (cant < n)
	{
		_putchar('_');
		cant++;
	}
	_putchar(10);
}
