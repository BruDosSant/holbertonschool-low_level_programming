#include <stdio.h>
#include <stdlib.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;

    // Allocate memory for the new dog
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return NULL;

    // Allocate memory and copy the name if it's not NULL
    if (name == NULL)
        new_dog->name = NULL;
    else
    {
        new_dog->name = malloc(strlen(name) + 1);  // +1 for the null terminator
        if (new_dog->name == NULL)
        {
            free(new_dog);  // Free memory allocated for the dog struct
            return NULL;
        }
        strcpy(new_dog->name, name);
    }

    // Set the age
    new_dog->age = age;

    // Allocate memory and copy the owner if it's not NULL
    if (owner == NULL)
        new_dog->owner = NULL;
    else
    {
        new_dog->owner = malloc(strlen(owner) + 1);  // +1 for the null terminator
        if (new_dog->owner == NULL)
        {
            free(new_dog->name);  // Free memory allocated for name
            free(new_dog);        // Free memory allocated for the dog struct
            return NULL;
        }
        strcpy(new_dog->owner, owner);
    }

    return new_dog;
}
