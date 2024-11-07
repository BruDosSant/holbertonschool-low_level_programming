#include "main.h"

/**
 * _memcpy - llena un bloque de memoria con un contenido especifico
 * @dest: puntero al bloque de memoria que se quiere llenar
 * @src: el valor que se quiere asignar
 * @n: la cantidad de bytes que se van a llenar
 * Return: devuelve un puntero al espacio de memoria que se queria llenar
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
