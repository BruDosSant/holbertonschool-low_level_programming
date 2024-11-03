#include "main.h"

/**
 * leet - encripta el sting p
 * @p: string a encriptar
 * Return: el dtring encriptado
 */

char *leet(char *p)
{
	char *r = p;
	char a[] = { 'a', 'e', 'o', 't', 'l' };
	char n[] = { 4, 3, 0, 7, 1 };
	int i = 0;

	while (*p)
	{
		for (i = 0; i < 5; i++)
		{
			if (*p == a[i] || *p == a[i] - 32)
				*p = n[i] + '0';
		}
		p++;
	}
	return (r);
}
