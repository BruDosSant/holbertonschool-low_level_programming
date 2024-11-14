#include "main.h"
/*
 *_puts_recursion - Imprime una cadena de caracteres seguida de un salto de línea usando recursión.
 *@s: Puntero a la cadena de caracteres terminada en '\0' que se desea imprimir.
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar(10);
	}
}
