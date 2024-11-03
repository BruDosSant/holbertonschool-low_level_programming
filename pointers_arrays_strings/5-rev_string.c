#include "main.h"

/**
 * rev_string - imprime pa tras
 * @s: palabra
 */
void rev_string(char *s)
{
		int a, b;

		a = 0;
		b = 0;

		while (s[a] != '\0')
		{
			a++;
		}
		a--;
		while (b < a)
		{
			char c = s[a];

			s[a] = s[b];
			s[b] = c;
			a--;
			b++;
		}
}
