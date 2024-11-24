#include "functions_pointers.h"
#include<stdio.h>

/**
 * int_index - searches for an integer.
 * @array: array de enteros que son insertados en la funcion cmp
 * @size: el tama√o de ese array
 * @cmp: la funcion que va a utilizar el array.
 * Return: 1 o -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (int i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
