#include "main.h"

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success 1. On error, -1 is returned.
 */
int _putchar(char c);

/**
 * _sqrt_helper - Recursive helper function to find the square root.
 * @n: The number to find the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of n if found, -1 otherwise.
 */
int _sqrt_helper(int n, int guess)
{
if (guess * guess == n)
return (guess);
if (guess * guess > n)
return (-1);
return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n if it exists, -1 otherwise.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 0));
}
