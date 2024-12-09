#include "lists.h"
#include<stdlib.h>

/**
 * get_dnodeint_at_index - retorna el nodo en el índice dado dela lisa
 * @head: puntero al primer nodo de la lista
 * @index: el índice del nodo que se desea obten
 * Return: puntero al nodo en el índice especificado, o NULL si el nodo no existe
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return head;
		
		head = head->next;
		count++;
	}

	return (NULL);
}
