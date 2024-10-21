#include<stdio.h>

/**
 * main - intento de putchar
 * Return: 0
 */
int main(void)
{
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++)
	{
	if (letra != 'q')
	if (letra != 'e')
		putchar(letra);
	}
	{
		putchar('\n');
	}

	return (0);
}
