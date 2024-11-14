#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;
	a = malloc(size * sizeof(char));
	if(a == NULL)
	{
		return (NULL);	
	}
	if(size > 0)
	{
		for(i = 0; i <= size; i++)
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
