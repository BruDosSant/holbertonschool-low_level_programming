#include "main.h"

/**
 * _isalpha - intentando inventar
 * @c: deberia ser una letra, si no es deberia dar 0
 * Return: 0
 */
int _isalpha(int c)
{

	if (c >= 65 && c <= 90)
		_putchar(49);
	else if (c >= 97 && c <= 122)
		_putchar(49);
	else
		_putchar(48);
}
