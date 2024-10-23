#include "main.h"

/**
 * _isalpha - intentando inventar
 * @c: deberia ser una letra, si no es deberia dar 0
 * Return: 0
 */
int _isalpha(int c)
{
	char j;

	if (c >= 65 && c <= 90)
	{
		return (49);
	}
	else if (c >= 97 && c <= 122)
	{
		return (49);
	}
	else
	{
		return (48);
	}
}
