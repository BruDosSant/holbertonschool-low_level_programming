#include "main.h"

/**
 * _strcat - Concatena el contenido de dos pointers
 * @dest: string destino
 * @src: string que se agrega al destino
 * Return: los dos strings uno despues del otro
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
