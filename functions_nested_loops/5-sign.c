#include "main.h"

#include "main.h"

/**
 * print_sign - intentando inventar
 * @n: deberia ser un nÃmero para ver su signo
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		_putchar('-');
		return (-1);
}
