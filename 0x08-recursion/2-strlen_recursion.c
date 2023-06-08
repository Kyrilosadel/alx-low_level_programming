#include "main.h"

/**
 * _putchar - Writes a character  output
 * @c: The charactritten
 *
 * Return: On succesturned.
 */
int _putchar(char c);

/**
 * _strlen_recursion - Returnsf a string.
 * @s: The stasure.
 *
 * Return: The tring.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return 0;
return 1 + _strlen_recursion(s + 1);
}
