#include<stdio.h>

/**
 * main - no tengo idea prueba
 * Return: 0
*/

int main(void)
{
    int length = 2; // Longitud de los dígitos
    int max = 10;   // Máximo valor para cada dígito (0-9)

    // Generar combinaciones de 00 a 99
    for (int i = 0; i < max; i++) {
        for (int j = 0; j < max; j++) {
            printf("%d%d\n", i, j);
        }
    }

    return 0;
}
