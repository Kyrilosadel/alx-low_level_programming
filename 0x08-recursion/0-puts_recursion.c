#include "main.h"

/**
 * _putchar - Writr to the standard output
 * @c: The character to be written
 *
 * Return: On success 1. On er.
 */
int _putchar(char c);

/**
 * _puts_recursion - Prints a string fa new line.
 * @s: The stringrinted.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
