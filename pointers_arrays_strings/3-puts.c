#include "main.h"

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(a);
		a++;
	}
}
