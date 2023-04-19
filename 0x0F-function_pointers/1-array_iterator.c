#include "function_pointers.h"

/**
 * array_iterator - maps an array through a func pointer
 * @array: the int array
 * @size: the array size
 * @action: function pointer
 *
 * return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int *end;
if (array && size && action)
{
end = array + size - 1;
while (array <= end)
{
action(*array);
array++;
}
}
}
