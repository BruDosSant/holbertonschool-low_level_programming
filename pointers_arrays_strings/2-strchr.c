#include "main.h"

/**
 * _strchr - aloha
 * @s: manin
 * @c: alhoa
 * Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
	{
	        if (c == '\0')
        	{
                	return ('\0');
        	}
		s++;
	}
	return (s);
}
