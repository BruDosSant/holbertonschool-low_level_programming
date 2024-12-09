#include "main.h"

/**
 * binary_to_uint - convierte un binario a unsigned int
 * @b: binario que entra
 * Return: entreo que sale
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);
		dec = 2 * dec + (b[i] - 48);
	}
	return (dec);
}
