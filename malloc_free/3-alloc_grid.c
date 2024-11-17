#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: The number of columns in the grid
 * @height: The number of rows in the grid
 * Return: Pointer to the 2 dimentions array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **res;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	res = (int **)malloc(height * sizeof(int *));
	if (res == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		res[i] = (int *)malloc(width * sizeof(int));
		if (res[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(res[j]);
			}
			free(res);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			res[i][j] = 0;
		}
	}
	return res;
}
