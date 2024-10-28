#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - imprime de todod un poco
 * @n: numero inicial
 * Return: void
 */
void print_to_98(int n)
{
	int num;

	if (n < 98)
	{
		for (num = n; num < 98; num++)
		{
			printf("%d, ", num);
		}
		printf("%d\n", 98);
	}
	else if (n > 98)
	{
		for (num = n; num > 98; num--)
		{
			printf("%d, ", num);

		}
		printf("%d\n", 98);
	}
	else
	{
		printf("%d\n", n);
	}
}
