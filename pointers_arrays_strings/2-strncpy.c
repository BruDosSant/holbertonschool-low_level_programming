#include "main.h"

/**
 * _strncpy - copia un string desde 0 hasta dest
 * @dest: string
 * @src: string
 * @n: numero de chars que se copian
 * Return: Dest + los cambios
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
