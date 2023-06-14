#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments passed
 * @ac: Number of arguments
 * @av: Array of arguments
 *
 * Return: Pointer to the concatenated string or NULL if allocation fails
 */
char *argstostr(int ac, char **av)
{
int i, j, total_length = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
total_length++;
}
total_length += ac;

str = malloc(sizeof(char) * (total_length + 1));
if (str == NULL)
return (NULL);
int k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[k] = av[i][j];
k++;
}

if (str[k] == '\0')
{
str[k++] = '\n';
}
}

return (str);
}

