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
	printf("La arquitectura es de 32 bits.\n");
	#else
	printf("Arquitectura desconocida.\n");
	#endif

	return (0);
}
