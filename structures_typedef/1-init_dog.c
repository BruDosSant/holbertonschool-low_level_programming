#include "dog.h"
#include<stddef.h>

/**
 * init_dog - prints a struct dog
 * @d: pointer a la estructura
 * @name: nombre
 * @age: edad
 * @owner: propietario
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
