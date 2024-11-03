#include "main.h"

/**
 * _strcat - Concatena el contenido de dos pointers
 * @dest: string destino
 * @src: string que se agrega al destino
 * Return:
 */
char *_strcat(char *dest, char *src)
{
	char *dest_og = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_og);
}
