#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each a on a newl
 * @array: array
 * @size: how many elemint
 * @action: pointer to pringular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int *ned = array + size - 1;

if (array && size && action)
while (array <= ned)
action (*array++);
}
