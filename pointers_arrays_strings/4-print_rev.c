#include "main.h"

void print_rev(char *s)
{
		int i, a;

		i = 0;

		while (s[i] != '\0')
		{
			i++;
		}
		
		a = i;

		while (a >= 0)
		{
			_putchar(s[a]);
			a--;
		}
			_putchar(10);
}
