#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    char *name_copy, *owner_copy;
    int name_len, owner_len;

    /* Allocate memory for the new dog */
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    /* Copy the name */
    name_len = strlen(name) + 1;
    name_copy = malloc(name_len);
    if (name_copy == NULL)
    {
        free(new_dog);
        return (NULL);
    }
    strcpy(name_copy, name);

    /* Copy the owner */
    owner_len = strlen(owner) + 1;
    owner_copy = malloc(owner_len);
    if (owner_copy == NULL)
    {
        free(name_copy);
        free(new_dog);
        return (NULL);
    }
    strcpy(owner_copy, owner);

    /* Set the values in the new dog structure */
    new_dog->name = name_copy;
    new_dog->age = age;
    new_dog->owner = owner_copy;

    return (new_dog);
}

