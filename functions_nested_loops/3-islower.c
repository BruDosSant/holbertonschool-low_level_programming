#include <ctype.h>

/**
 * _islower - Check if a character is lowercase
 * @c: The character to check
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
