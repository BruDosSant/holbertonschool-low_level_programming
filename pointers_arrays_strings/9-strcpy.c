#include"main.h"

/**
 * *_strcpy - copia string
 * @dest: donde se copia
 * @src: lo que se copia
 * Return: desination og
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_og = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_og);
}
