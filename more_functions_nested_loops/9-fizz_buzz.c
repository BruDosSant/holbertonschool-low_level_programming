#include "main.h"
#include<stdio.h>

int main(void)
{
	int num, tres, cinco;

	for (num = 1; num <= 100; num++)
	{
		cinco = num % 5;
		tres = num % 3;

		if (tres == 0)
		{
			printf("Fizz");
		}
		else if (cinco == 0)
		{
			printf("Buzz");
		}
		else if (tres == 0 && cinco == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", num);
		}
	}
	return(0);
}
