#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size in bytes to be allocated
 *
 * Return: Pointer to the allocated memory
 *         Exits with status value of 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);
if (p == NULL)
exit(98);

return (p);
}

