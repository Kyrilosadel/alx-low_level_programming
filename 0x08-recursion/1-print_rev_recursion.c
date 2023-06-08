#include "main.h"

/**
 * _putchar - Writes a character to th
 * @c: The character to be written
 *
 * Return: On sucs returned.
 */
int _putchar(char c);

/**
 * _strlen_recursion - Returns thering.
 * @s: The strisure.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
 if (*s == '\0')
return 0;
return 1 + _strlen_recursion(s + 1);
}

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
 return;
 _print_rev_recursion(s + 1);
 _putchar(*s);
}
