#include <stdio.h>
#include "main.h"

/**
 * print_name - prints a name using a specified printing function
 * @name: pointer to the name string
 * @f: pointer to the printing function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}

