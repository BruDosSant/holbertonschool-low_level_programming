#include "main.h"

/**
 * times_table - ups i did it again
 */

void times_table(void)
{
	int line, num, producto;

	for (line = 0; line <= 9; line++)
	{
		for (num = 0; num <= 9; num++)
		{
			producto = line * num;
			if (producto <= 9)
			{
				if (num != 0)
				{
					_putchar(' ');
				}
				_putchar(producto + '0');
			}
			if (producto > 9)
			{
				_putchar(producto / 10 + '0');
				_putchar(producto % 10 + '0');
			}
			if (num != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		{
			_putchar(10);
		}
	}
}
