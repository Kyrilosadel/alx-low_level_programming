#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array har c
 * @size: sizeray
 * @c: chgn
 * Description: creaize and assign char c
 * Return: pointerail
 *
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int p;

arr = malloc(sizeof(char) * size);
if (size == 0 || arr == NULL)
return (NULL);

for (p = 0; p < size; p++)
arr[p] = c;
return (arr);
}

