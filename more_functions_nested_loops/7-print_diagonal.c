#include "main.h"

/**
 * print_diagonal - imprime una linea n cantidad de veces
 * @n: cant de veces que se imprimer n
 */
void print_diagonal(int n)
{
	int e;

	int cant = 0;

	if (n <= cant)
		_putchar(10);

	while (cant <= n)
	{
		e = 1;
		while (e < cant)
		{
			_putchar(' ');
			e++;
		}
		if (e == cant)
		{
			_putchar(47);
			_putchar(10);
		}
		cant++;
	}
}
