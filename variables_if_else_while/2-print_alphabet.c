#include<stdio.h>

/**
 * main - intento de putchar
 * Return: 0
 */
int main(void)
{
	for (char letra = 'a'; letra <= 'z'; letra++)
	{
		putchar(letra);
		putchar('\n');
	}

	return (0);
}
