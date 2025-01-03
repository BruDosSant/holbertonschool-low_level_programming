#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - a�ade un nodulo al funal de la lista
 * @head: doble puntero al primer nodo de la lista
 * @str: cont del muevo nodulo
 * Return: NULL si falla o la ubicacion del ultimo nodulo ahora el new_node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
