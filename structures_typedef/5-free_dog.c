#include "dog.h"
#include<stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - libera el perrinho
 * @d: pointer al perrinho
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);

		if (d->owner != NULL)
			free(d->owner);

		free(d);
	}
}
