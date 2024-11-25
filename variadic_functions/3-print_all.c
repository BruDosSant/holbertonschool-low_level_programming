#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - imprime char
 * @arg: lista de la cual se sacan los argumentos (arg)
 */
void print_char(va_list arg)
{
	char letra;

	letra = va_arg(arg, int);
	printf("%c", letra);
}

/**
 * print_int - imprime int
 * @arg: lista de la cual se sacan los argumentos (arg)
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - imprime float.
 * @arg: lista de la cual se sacan los argumentos (arg)
 */
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string - imprime string
 * @arg: lista de la cual se sacan los argumentos (arg)
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
		printf("%s", str);
}

/**
 * print_all - prints anything.
 * @format: cadena que contiene los tipos de argumentos
 * @...: una lista de argumentos variables
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *sep;

	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	sep = "";
	i = 0;
	j = 0;

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
		{
			j++;
		}

		if (j < 4)
		{
			printf("%s", sep);
			funcs[j].print(args);
			sep = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
