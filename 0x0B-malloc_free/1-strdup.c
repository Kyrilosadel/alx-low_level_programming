#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * my_strdup - Duplicates a string to a new memory location
 * @src: Source string
 *
 * Return: Pointer to the duplicated string or NULL if allocation fails
 */
char *my_strdup(char *src)
{
char *dest;
int i, len = 0;

if (src == NULL)
return (NULL);

i = 0;
while (src[i] != '\0')
{
len++;
i++;
}

dest = malloc(sizeof(char) * (len + 1));

if (dest == NULL)
return (NULL);

for (i = 0; src[i]; i++)
dest[i] = src[i];

return (dest);
}

