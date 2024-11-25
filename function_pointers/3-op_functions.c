#include "3-calc.h"

/**
 * op_add - suma
 * @a: original
 * @b: sumado
 * Return: resultado
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - resta
 * @a: original
 * @b: restado
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplica
 * @a: lo que se multipplica
 * @b: por lo que se multiplica
 * Return: resultado de mnmulti
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide sin mas
 * @a: dividendo
 * @b: divisor
 * Return: resultado de division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calcula el modulo, como cuando _putchar
 * @a: dividendo
 * @b: divisor
 * Return: resto de la division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
