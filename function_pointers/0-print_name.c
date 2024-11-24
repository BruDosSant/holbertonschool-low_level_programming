#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - toma un valor name y lo utilizza en una funcion f
 * @name: valor que introduce en la funcion f (string)
 * @f: nombre de la funcion que imprime name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
