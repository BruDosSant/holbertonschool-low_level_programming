#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - libera el espacio de todos los nodulos de una lista
 * @head: puntero al comienzo de la lista (la vamos a recorrer)
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
