#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and init specific char
 * @size: The size ofarray
 * @c: The character toarray with
 *
 * Return: Pointer to the ait fails
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)
return (NULL);

char *array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
for (unsigned int i = 0; i < size; i++)
array[i] = c;

return (array);
}

