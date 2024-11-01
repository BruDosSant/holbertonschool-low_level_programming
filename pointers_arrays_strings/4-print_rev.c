#include "main.h"

/**
 * print_rev - imprime pa tras
 * @s: palabra
 */
void print_rev(char *s)
{
		int i, a;

		i = 0;

		while (s[i] != '\0')
		{
			i++;
		}
		
		a = i - 1;

		while (a >= 0)
		{
			_putchar(s[a]);
			a--;
		}
			_putchar(10);
}
