#include "main.h"

/**
 * print_alphabet - intento de putchar
 * Return: 0
 */

void print_alphabet(void)
{
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++)
	{
		_putchar(letra);
	}
		_putchar('\n');
}

/**
 * main - intento de putchar
 * Return: 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}
