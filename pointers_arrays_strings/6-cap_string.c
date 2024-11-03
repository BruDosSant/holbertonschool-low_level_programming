#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * Return: c
 */

char *cap_string(char *a)
{
	char *start = a;
	int i = 0;

	while (*a != '\0')
	{
		if (a[i] == ' ' || a[i] == '\n' || a[i] == '\t' || a[i] == '.' || a[i] == ',' || a[i] == '!' || a[i] == '?' || a[i] == ';' || a[i] == ':')
		{
			if (a[i] >= 'a' && a[i] <= 'z')
			{
				a[i] = a[i] - 32;
			}
		}
		a++;
	}
	return (start);
}
