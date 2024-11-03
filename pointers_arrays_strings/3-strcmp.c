#include "main.h"

/**
 * _strcmp - Funcion que compara dos char
 * @s1: char 1
 * @s2: char 2
 * Return: positivo si s1 es mayor que s2 negativo si al revez y 0 si =
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
