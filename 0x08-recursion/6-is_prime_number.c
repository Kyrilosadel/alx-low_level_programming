#include "main.h"
/**
 * _putchar - Writes a character to the standard output
 * @c: The character tten
 *
 * Return: On success 1. On error, -1 is returned.
 */
int _putchar(char c);

/**
 * is_prime_helper - Rection to check if a number is prime.
 * @n: The number to check for primality.
 * @divisor: The current divcheck.
 *
 * Return: 1 if the number 0 otherwise.
 */
int is_prime_helper(int n, int divisor)
{
if (n <= 1)
return (0);
if (n == divisor)
return (1);
if (n % divisor == 0)
return (0);
return (is_prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - ber is me.
 * @n: The numbity.
 *
 * Return: 1 if otherwise.
 */
int is_prime_number(int n)
{
return (is_prime_helper(n, 2));
}
