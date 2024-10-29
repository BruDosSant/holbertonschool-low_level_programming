#include "main.h"

/**
 * more_numbers - ups i did it again
 */

void more_numbers(void)
{
	int cant, num;

	num = 0;
	for (cant = 1; cant <= 10; cant++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
		}
		{
			_putchar(10);
		}
	}
}
