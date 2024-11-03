#include "main.h"

/**
 * puts_half - imprime la segunda mitad de un string
 * @str: es el string
 */
void puts_half(char *str)
{
	int a, b;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 == 0)
	{
		b = a / 2;
	}
	else
	{
		b = (a / 2) + 1;
	}
	while (str[b] != '\0')
	{
		_putchar(str[b]);
		b++;
	}
	_putchar(10);
}
