#include "variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: Cadena que separa las cadenas
 * @n: Cantidad de cadenas
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}
