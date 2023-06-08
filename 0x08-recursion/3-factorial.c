#include "main.h"

/**
 * _putchar - Writes a charactndard output
 * @c: The chararitten
 *
 * Return: On success 1. returned.
 */
int _putchar(char c);

/**
 * factorial - Returns thef a given number.
 * @n: The number toctorial of.
 *
 * Return: The factoriaegative.
 */
int factorial(int n)
{
if (n < 0)
return -1;
if (n == 0)
return 1;
return n * factorial(n - 1);
}
