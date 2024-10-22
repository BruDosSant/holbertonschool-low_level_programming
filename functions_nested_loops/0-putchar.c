#include<unistd.h>

/**
 * main - aloha
 * Return: 0
 */

int _putchar(char c) {
    return (write(1, &c, 1));
}

int main() {
    _putchar('H');  // Imprime 'H'
    _putchar('e');  // Imprime 'e'
    _putchar('l');  // Imprime 'l'
    _putchar('l');  // Imprime 'l'
    _putchar('o');  // Imprime 'o'
    _putchar(' ');  // Imprime un espacio
    _putchar('W');  // Imprime 'W'
    _putchar('o');  // Imprime 'o'
    _putchar('r');  // Imprime 'r'
    _putchar('l');  // Imprime 'l'
    _putchar('d');  // Imprime 'd'
    _putchar('!');  // Imprime '!'
    _putchar('\n'); // Imprime una nueva línea
    return 0;
}
