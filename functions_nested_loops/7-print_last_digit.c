#include "main.h"

/**
 * print_last_digit - funcion para eso mismo
 * @n: numerin que entra
 * Return: 0
 */
int print_last_digit(int n)
{
	int last_digit;
	
	if (n < 0)
	{
		n = -n;
	}
	else if (n >= 0)
	{
		n = n;
	}
	else

	
	last_digit = n % 10;
	
	_putchar(last_digit + '0');

		return (last_digit);
}