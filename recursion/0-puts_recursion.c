#include "main.h"
/*
int main(void)
{
	_puts_recursion(s);
	_putchar(10);

	return (0);
}
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
