#include "main.h"

/**
 * print_most_numbers - imprime todos los n del 0 al 9 menos 2 y 4
 */

void print_most_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			i++;
		}
		_putchar(i + '0');
		i++;
	}
	{
		_putchar('\n');
	}
}
