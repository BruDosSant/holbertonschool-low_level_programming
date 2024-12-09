#include "lists.h"
#include<stdlib.h>

/**
 * free_dlistint - Libera todos los nodos de una lista doblemente enlazada.
 * @head: Puntero al primer nodo de la lista.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
