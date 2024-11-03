#include "main.h"

/**
 * leet - encripta el sting p
 * @p: string a encriptar
 * Return: el dtring encriptado
 */

char *leet(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] == 'a' || p[i] == 'A')
			p[i] = '4';
		else if (p[i] == 'e' || p[i] == 'E')
			p[i] = '3';
		else if (p[i] == 'o' || p[i] == 'O')
			p[i] = '0';
		else if (p[i] == 't' || p[i] == 'T')
			p[i] = '7';
		else if (p[i] == 'l' || p[i] == 'L')
			p[i] = '1';
		else
		{
		}
	}
	return (p);
}
