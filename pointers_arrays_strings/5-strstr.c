#include "main.h"

/**
* _strstr - locates a substring
* @haystack: string mas largo a buscar
* @needle: el substring a buscar
* Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (0);
}
