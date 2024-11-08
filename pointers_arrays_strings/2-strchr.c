#include "main.h"

/**
 * _strchr - aloha
 * @s: manin
 * @c: alhoa
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;

		else
			return (s);
	}
	if (c == '\0')
	{
		return (s);
	}
	return (0);
}
