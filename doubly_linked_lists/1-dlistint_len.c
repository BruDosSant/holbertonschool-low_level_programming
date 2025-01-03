#include "lists.h"
#include<stddef.h>

/**
 * dlistint_len - devuelve el número de elementos e la list
 * @h: puntero al primer nodulo de la lista
 * Return: el número de elementos en la lista.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
