#include "main.h"

/**
 * string_toupper - convierte en mayus
 * Return: el input pero en mayus
 */

char *string_toupper(char *a)
{
	while (*a != '\0')
	{
		if (*a >= 'a' && *a <= 'z')
		{
			*a = *a - 32;
		}
		a++;
	}
	return (a);
}
