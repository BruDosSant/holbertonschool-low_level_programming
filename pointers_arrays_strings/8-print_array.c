#include<stdio.h>

/**
 * print_array - imprime n datos de un array
 * @a: dato del array
 * @n: cantidad de datos del array a imprimir
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
