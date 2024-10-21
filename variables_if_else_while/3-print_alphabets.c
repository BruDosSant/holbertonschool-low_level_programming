#include<stdio.h>

/**
 * main - intento de putchar
 * Return: 0
 */
int main(void)
{
	char letra;
	char mayus;

	for (letra = 'a'; letra <= 'z'; letra++)
	{
		for (mayus = 'A'; mayus <= 'Z'; mayus++)
		{
			putchar(letra);
			putchar(mayus);
		}
	}
	{
	putchar('\n');
	}
	return (0);
}
