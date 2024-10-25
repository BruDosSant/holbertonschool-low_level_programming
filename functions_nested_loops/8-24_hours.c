#include "main.h"

/**
 * jack_bauer - ups i did it again
 */

void jack_bauer(void)
{
	char h1, h2, m1, m2;
	h1 = 0;
	h2 = 0;
	m1 = 0;
	m2 = 0;

	_putchar(h1 + '0');
	_putchar(h2 + '0');
	_putchar(':');
	_putchar(m1 + '0');
	_putchar(m2 + '0');
	_putchar('\n');

	while (h1 < 3)
	{
		m2++;
		if (m2 > 9)
		{
			m1++;
			m2 = 0;
		}
		if (m1 > 5)
		{
			h2++;
			m1 = 0;
		}
		if (h2 > 9)
		{
			h1++;
			h2 = 0;
		}
		if (h1 == 2 && h2 == 4)
		{
			h1 = 3;
		}
		_putchar(h1 + '0');
		_putchar(h2 + '0');
		_putchar(':');
		_putchar(m1 + '0');
		_putchar(m2 + '0');
		_putchar('\n');
	}
}
