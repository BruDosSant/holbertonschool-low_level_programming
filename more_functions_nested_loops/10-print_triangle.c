#include"main.h"

/**
 * print_triangle - imprime una linea n cantidad de veces
 * @size: cant de veces que se imprimer n
 */
void print_triangle(int size)
{
	int r, l, a;

	l = 1;

	if (size <= 0)
		_putchar(10);
	while (l <= size)
	{
		r = size - l;
		while (r > 0)
		{
			_putchar(' ');
			r--;
		}
		for (a = 1; a <= l; a++)
		{
			_putchar('#');
		}
		{
			_putchar(10);
		}
		l++;
	}
}
