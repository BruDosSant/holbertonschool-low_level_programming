#include "main.h"

/**
 * string_toupper - convierte en mayus
 * @a: string
 * Return: el input pero en mayus
 */

char *string_toupper(char *a)
{
	char *start = a;

	while (*a != '\0')
	{
		if (*a >= 'a' && *a <= 'z')
		{
			*a = *a - 32;
		}
		a++;
	}
	return (start);
}
