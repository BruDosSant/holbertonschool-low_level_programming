#include "main.h"

/**
 * rev_string - imprime pa tras
 * @s: palabra
 */
void rev_string(char *s)
{
		int i, a;

		i = 0;
		a = 0;

		while (s[i] != '\0')
		{
			i++;
		}
		while (i >= 0)
		{
			s [a] = i;
			i--;
			a++;
		}
}
