#include "3-calc.h"

/**
 * get_op_func - analiza que operacion realizar
 * @s: puntero a str que contiene el operador aritméti
 * Return: puntero a una funciónque realiza lo que indica el operador
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	while (i < 10)
	{
		if (s[0] == ops->op[i])
			break;
		i++;
	}

	return (ops[i / 2].f);
}
