#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

/**
 * create_array - crea un array con malloc
 * @size: es el largo del arragy
 * @c: es el contenido del array
 * Return: el array
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(size * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}
	if (size > 0)
	{
		for (i = 0; i <= size; i++)
		{
			a[i] = c;
		}
		return (a);
	}
	else
	{
		return (NULL);
	}
}
