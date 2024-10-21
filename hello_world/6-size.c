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
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	#else
	printf("Arquitectura desconocida.\n");
	#endif

	return (0);
}
