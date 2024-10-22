#include "main.h"
#include <ctype.h>

/**
 * _islower - Verifica si un carácter es una letra minúscula
 * @c: El carácter a verificar
 * Return: 1 si es minúscula,0 si no
 */

int _islower(int c)
{
    int c;

    if (islower(c))
    {
        _putchar(c);
        _putchar("Si es minuscula");
    }
    else
    {
        _putchar("No es minuscula");
    }

    return (islower(c) ? 1 : 0);
}
