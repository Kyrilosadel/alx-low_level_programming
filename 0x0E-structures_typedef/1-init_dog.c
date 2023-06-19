#include "dog.h"

/**
 * init_dog - Initializes ruct dog
 * @d: Pointer to the strog variable
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner e dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;
}

