#include "main.h"

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success 1. On error, -1 is returned.
 */
int _putchar(char c);

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base value.
 * @y: The exponent value.
 *
 * Return: The value of x raised to the power of y.
 *         If y is lower than 0, returns -1.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return -1;
if (y == 0)
return 1;
return x * _pow_recursion(x, y - 1);
}
