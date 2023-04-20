#include "main.h"

/**
 * _puts_recursion - Prints a string recursively.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s++);
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}

