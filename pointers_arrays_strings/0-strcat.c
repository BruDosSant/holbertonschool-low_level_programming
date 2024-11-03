#include <stdio.h>

char *_strcat(char *dest, const char *src) 
{
	char dest_og = dest;

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

	return (original_dest);
}
