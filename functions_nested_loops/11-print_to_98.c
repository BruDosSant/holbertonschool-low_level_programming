#include "main.h"
#include<stdio.h>

void print_to_98(int n)
{
	int num;

	for (num = n; num <= 98; n++)
	{
		printf("%d,' '", num);
	}
	{
		_putchar(10);
	}

	for (num = n; num > 98; n--)
	{
		printf("%d,' '", num);
	}
	{
		_putchar(10);
	}
}
