#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicating
 * @str: The strplicate
 *
 * Return: Pointer to the duplicated string, or NULL if iy was available
 */
char *_strdup(char *str)
{
if (str == NULL)
return (NULL);

char *duplicate = malloc(sizeof(char) * (strlen(str) + 1));
if (duplicate == NULL)
return NULL;

strcpy(duplicate, str);

return (duplicate);
}

