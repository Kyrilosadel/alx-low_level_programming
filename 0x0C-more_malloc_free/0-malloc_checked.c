#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memo malloc
 * @b: number of bytes tolocate
 *
 * Return: a pointer to tated memory
 */
void *malloc_checked(unsigned int b)
{
void *prr;
prr = malloc(b);
if (prr == NULL)
exit(98);
return (prr);
}

