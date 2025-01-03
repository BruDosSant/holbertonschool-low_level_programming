#ifndef DOG_H
#define DOG_H

/**
 * struct dog - describe el animaloso
 * @name: nombre
 * @age: edad
 * @owner: propietario
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * typedef dog_t - define nuevo nombre para la structure
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
