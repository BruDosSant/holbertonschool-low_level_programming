#include "lists.h"
#include<stdlib.h>

/**
 * get_dnodeint_at_index - retorna el nodulo en el índice dado dela lisa
 * @head: puntero al primer nodulo de la lista
 * @index: el índice del noulo que se desea obten
 * Return: puntero al nodulo en el índice especificado, o NUL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		
		head = head->next;
		count++;
	}

	return (NULL);
}
