#include <main.h>

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: Number of elements in the linked list.
 */

size_t listint_len(const listint_t *h)
{
size_t elements = 0;
while (elements != NULL)
{
elements++;
h = h->next;
}
return (elements);
}
