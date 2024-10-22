#include "main.h"

/**
 * print_alphabet_x10 - ups i did it again
 */

void print_alphabet_x10(void)
{
	char az;
	int cant;

	for (cant = 1; cant <= 10; cant++)
	{
		for (az = 'a'; az <= 'z'; az++)
		{
			_putchar(az);
		}
		{
			_putchar(10);
		}
	}
}
