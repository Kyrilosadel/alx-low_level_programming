#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creategers
 * @min: minimum ranored
 * @max: maximum range of values sements
 *
 * Return: pointer torray
 */
int *array_range(int min, int max)
{
int *psr;
int d, siz;

if (min > max)
return (NULL);

siz = max - min + 1;

psr = malloc(sizeof(int) * siz);

if (psr == NULL)
return (NULL);
for (d = 0; min <= max; d++)
psr[d] = min++;

return (psr);
}

