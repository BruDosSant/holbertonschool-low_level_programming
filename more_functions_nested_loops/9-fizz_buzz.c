#include "main.h"
#include<stdio.h>

int main(void)
{
	int num, tres, cinco;

	for (num = 1; num <= 100; num++)
	{
		cinco = num % 5;
		tres = num % 3;

		if (num == 100)
		{
			printf("FizzBuzz");
		}
		else if (tres == 0 && cinco == 0)
		{
			printf("FizzBuzz ");
		}
		else if (cinco == 0)
		{
			printf("Buzz ");
		}
		else if (tres == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");
	return(0);
}
