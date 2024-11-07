#include "main.h"

/**
 * _memset - llena un bloque de memoria con un contenido especifico
 * @s: puntero al bloque de memoria que se quiere llenar
 * @b: el valor que se quiere asignar
 * @n: la cantidad de bytes que se van a llenar
 * Return: devuelve un puntero al espacio de memoria que se queria llenar
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *ptr = (unsigned char *)s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		ptr[i] = (unsigned char)b;
	}

	return s;
}
