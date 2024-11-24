#include "function_pointers.h"
#include<stdio.h>
#include<stddef.h>

/**
 * array_iterator - executes a function given as a parameter
 * @array: dato a insertart en la funcioon
 * @size: el tama√o del array
 * @action: es la funcion que recibe parametro
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
