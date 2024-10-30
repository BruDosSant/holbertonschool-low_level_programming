#include "main.h"

/**
 * print_line - imprime una linea n cantidad de veces
 * @n: cant de veces que se imprimer n
 */
void print_line(int n)
{
	int cant = 0;

	while (cant < n)
	{
		_putchar('_');
		cant++;
	}
	_putchar(10);
}
