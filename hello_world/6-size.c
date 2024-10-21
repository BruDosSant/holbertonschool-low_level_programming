#include <stdio.h>
/**
 * main - Esta cosa me devuelve el peso que soporta cada arquitectura
 * Return: 0
 */
int main(void)
{
	#if defined(__x86_64__)
	printf("La arquitectura es de 64 bits.\n");
	#elif defined(__i386__)
	printf("Size of a char: 1 byte(s)\n");
	printf("Size of an int: 4 byte(s)\n");
	printf("Size of a long int: 4 byte(s)\n");
	printf("Size of a long long int: 8 byte(s)\n");
	#else
	printf("Arquitectura desconocida.\n");
	#endif

	return (0);
}
