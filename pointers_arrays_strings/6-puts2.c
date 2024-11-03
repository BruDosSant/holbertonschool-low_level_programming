#include "main.h"

/**
 * _puts - Inserta un string
 * @str: el string a printear
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
		_putchar(10);
}
