#include "dog.h"
#include<stddef.h>
#include<stdio.h>

/**
 * print_dog - imprime detlles del dog
 * @d: pointer a la data del dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d =! NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	printf("Age: %.6f\n", d->age);
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
