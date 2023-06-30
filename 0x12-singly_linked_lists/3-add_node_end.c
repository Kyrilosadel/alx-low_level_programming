#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at  of a linked list
 * @head: double pointer tst
 * @str: string to put inode
 *
 * Return: address of the it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *now;
list_t *temp = *head;
unsigned int len = 0;

while (str[len])
len++;

now = malloc(sizeof(list_t));
if (!now)
return (NULL);

now->str = strdup(str);
now->len = len;
now->next = NULL;

if (*head == NULL)
{
*head = now;
return (now);
}

while (temp->next)
temp = temp->next;

temp->next = now;

return (now);
}

