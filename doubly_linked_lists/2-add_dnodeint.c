#include "lists.h"
#include<stdlib.h>

/**
 * add_dnodeint - agrega un nuevo nodulo al principio de la lista
 * @head: doble puntero al primer nodo de la lista
 * @n: valor que se almacenará en el nuevo nod
 * Return: dirección del nuevo nodo, o ULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
