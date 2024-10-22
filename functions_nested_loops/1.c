#include "main.h"

/**
 * print_alphabet - imprime las letras de la a a la z
 */
void print_alphabet(void)
{
    char letra;

    for (letra = 'a'; letra <= 'z'; letra++)
    {
        _putchar(letra);
    }
    _putchar('\n');  // Imprime una nueva línea
}

/**
 * main - punto de entrada del programa
 * Return: 0
 */
int main(void)
{
    print_alphabet();  // Llama a la función para imprimir el alfabeto
    return 0;         // Retorna 0 para indicar éxito
}

