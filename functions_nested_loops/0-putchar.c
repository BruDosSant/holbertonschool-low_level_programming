#include<unistd.h>

/**
 * main - aloha
 * Return: 0
 */

int _putchar(char c) {
    return (write(1, &c, 1));
}

int main(void)
{
	_putchar('H');
	_putchar('e');
	_putchar('l');
	_putchar('l');
	_putchar('o');
	_putchar(' ');
	_putchar('W');
	_putchar('o');
	_putchar('r');
	_putchar('l');
	_putchar('d');
	_putchar('!');
	_putchar('\n');
	return 0;
}
