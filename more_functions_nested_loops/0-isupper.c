#include <ctype.h>

/**
 * _isupper - Ceckea si es minuscula o no
 * @c: Letra a checkear
 * Return: 1 si es mayuscula, 0 si no
 */
int _isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}
