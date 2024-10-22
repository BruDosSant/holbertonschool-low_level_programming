#include "main.h"

/**
 * main - intento de putchar
 * Return: 0
 */

int main(void)
{
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++)
	{
		_putchar(letra);
	}
	{
		_putchar('\n');
	}

	return (0);
}
