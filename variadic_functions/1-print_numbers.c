#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>

/**
 * print_number - prints numbers, followed by a new line
 * @separator: cadena que separa numeros
 * @n: cantidad de numeros
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}
