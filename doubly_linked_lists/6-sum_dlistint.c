#include "lists.h"
#include<stdlib.h>

/**
 * sum_dlistint - suma valor de todos los nodulos
 * @head: puntero al primer nodulo de la lista
 * Return: La suma de los datos, o 0 si la lista está vaca
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
