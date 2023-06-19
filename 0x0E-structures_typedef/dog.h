#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structusenting a dog
 * @name: Name of the dog
 * @age: Age of thg
 * @owner: Owner odog
 *
 * Description: This structure represeg and contains
 * its name, age, anname.
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */

