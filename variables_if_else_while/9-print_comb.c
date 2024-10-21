#include<stdio.h>

/**
 * main - no tengo idea prueba
 * Return: 0
*/

int main(void)
{
    int i, j;

    // Generar combinaciones de 00 a 99
    for (i = 0; i < 10; i++) {  // Primer dígito
        for (j = 0; j < 10; j++) {  // Segundo dígito
            printf("%d%d\n", i, j);
        }
    }

    return 0;
}
