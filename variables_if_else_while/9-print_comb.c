#include<stdio.h>

/**
 * main - no tengo idea prueba
 * Return: 0
*/

int main(void)
{
    int i;
    int length = 2;
    int max = 9;
    int counters[length];

    // Inicializar contadores a 0
    for (i = 0; i < length; i++) // Cambiando '0' por 0
    {
        counters[i] = 0;
    }

    for (;;)
    {
        // Imprimir los contadores
        for (i = length - 1; i >= 0; i--) // Cambiando '1' y '0' por 1 y 0
            printf("%d", counters[i]);
        printf("\n");

        // Incrementar los contadores
        for (i = 0; i < length; i++) // Cambiando '0' por 0
        {
            counters[i]++;

            if (counters[i] < max)
                break; // Si el contador es menor que max, salir del bucle
            else
                counters[i] = 0; // Reiniciar el contador a 0 si alcanza max
        }

        if (i >= length)
            break; // Si todos los contadores han alcanzado max, salir
    }

    return 0;
}

