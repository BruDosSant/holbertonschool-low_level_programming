#include "main.h"

/**
 * _strncpy - Copies up to n characters from the string src to dest.
 * @dest: The destination string where content is to be copied.
 * @src: The source string from which to copy.
 * @n: The maximum number of characters to copy from src.
 * 
 * Return: A pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
    char *original_dest = dest; // Save the original pointer to dest
    int i;

    // Copy up to n characters from src to dest
    for (i = 0; i < n; i++)
    {
        if (*src != '\0') // If there are still characters in src
        {
            *dest = *src; // Copy character from src to dest
            src++;        // Move to the next character in src
        }
        else
        {
            *dest = '\0'; // If src is shorter, fill dest with null
        }
        dest++; // Move to the next position in dest
    }

    // Ensure remaining positions in dest are filled with null if needed
    while (i < n)
    {
        *dest = '\0'; // Fill remaining dest with null bytes
        dest++;
        i++;
    }

    return (original_dest); // Return the original pointer to dest
}
