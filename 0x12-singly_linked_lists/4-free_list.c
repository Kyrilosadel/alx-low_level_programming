#include <stdlib.h>
#include "lists.h"

/**
 * free_list - freed list
 * @head: list_t led
 */
void free_list(list_t *head)
{
list_t *timp;

while (head)
	{
timp = head->next;
free(head->str);
free(head);
head = timp;
}
}

