#include "lists.h"

/**
 * list_len - imprime el largo de la lista
 * @h: pointer al primer nodulo de la lista
 * Return: numero de nodulos
 */

size_t list_len(const list_t *h)
{
	size_t count_nod = 0;

	while (h != NULL)
	{
		count_nod++;
		h = h->next;
	}
	return (count_nod);
}
