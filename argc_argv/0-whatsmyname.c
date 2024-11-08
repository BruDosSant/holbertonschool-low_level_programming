#include "main.h"
#include <stdio.h>

/**
 * main- prints its name, followed by a new line
 * @argc: segun yo no hace nada
 * @argv: es lo que devuelve el nombre del programa
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
