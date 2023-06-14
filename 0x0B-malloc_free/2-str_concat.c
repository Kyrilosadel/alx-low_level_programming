#include "main.h"
#include <stdlib.h>

/**
 * my_str_concat - Concatenates two strings
 * @s1: First string to concatenate
 * @s2: Second string to concatenate
 *
 * Return: Pointer to the concatenated string or NULL if allocation fails
 */
char *my_str_concat(char *s1, char *s2)
{
char *result;
int i, len1 = 0, len2 = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

i = 0;
while (s1[i] != '\0')
{
len1++;
i++;
}

i = 0;
while (s2[i] != '\0')
{
len2++;
i++;
}
result = malloc(sizeof(char) * (len1 + len2 + 1));

if (result == NULL)
return (NULL);
i = 0;
while (s1[i] != '\0')
{
result[i] = s1[i];
i++;
}

int j = 0;
while (s2[j] != '\0')
{
result[i] = s2[j];
i++;
j++;
}

result[i] = '\0';

return (result);
}
