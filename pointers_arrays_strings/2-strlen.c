#include "main.h"

/**
 * _strlen - cuenta longitud de string
 * @s: apunta al string
 * Return: longitud del string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
