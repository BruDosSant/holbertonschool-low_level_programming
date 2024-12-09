#include "lists.h"
#include<stdlib.h>

/**
 * insert_dnodeint_at_index - Inserta un nuevo nodulo en una posició esp
 * @h: doble puntero al primer nodulo de la lista
 * @idx: posicion donde se debe insertar el nuevo nodulo
 * @n: dalor del nuevo nodulo
 * Return: dirección del nuevo noulo, o NUL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *h;
	unsigned int count;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	count = 0;

	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL || (temp->next == NULL && count + 1 != idx))
	{
		free(new_node);
		return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node->next = temp->next;
	new_node->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
