#include <ctype.h>

/**
 * _isupper - Ceckea si es numero o no
 * @c: numero a checkear
 * Return: 1 si es numero, 0 si no
 */
int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}
