#include "lists.h"
#include<stdlib.h>

/**
 * add_dnodeint_end - agrega un nuevo nodo al final de la lista
 * @head: doble puntero al primer nodulo de la lista
 * @n: el valor entero que se almacenará en el nuevo noulo
 * Return: dirección del nuevo noulo, o NUL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = new_node;
		new_node->prev = temp;
	}

	return (new_node);
}
