#include "lists.h"

/**
 * print_list - imprime el contenido de una lista mientras que este no se NULL
 * @h: poointer a primer nodulo de la lista
 * Return: cantidad de nodulos en la lista
 */

size_t print_list(const list_t *h)
{
	size_t count_nod = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		count_nod++;
		h = h->next;
	}
	return (count_nod);
}
