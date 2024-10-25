#include "main.h"

void print_to_98(int n)
{
	for (n = n; n <= 98; n++)
	{
		if (n >= -9 && n <= 9)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
		else if (n <= -10 && n >= 10)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
			return(0);
}
