#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include<string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to duplicate
 * Return: A pointer to duplicated string, or NULL if memory allocation fails
 * or if str is NULL.
 */

char *_strdup(char *str)
{
	char *copy;
	size_t len;
	size_t i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	len++;

	copy = (char *)malloc(len);
	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}

	return (copy);
}
