#include "main.h"

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success 1. On error, -1 is returned.
 */
int _putchar(char c);

/**
 * wildcmp - Compares two strings and chedered identical.
 * @s1: The first g.
 * @s2: The tring.
 *
 * Return: 1 if the strings canred identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
    if (*s2 == '*')
    {
if (*(s2 + 1) == '\0')
            return 1;
 if (*s1 == '\0')
            return wildcmp(s1, s2 + 1);
return wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2);
}
 if (*s1 != *s2)
  return 0;
    if (*s1 == '\0' && *s2 == '\0')
  return 1;
    return wildcmp(s1 + 1, s2 + 1);
}
