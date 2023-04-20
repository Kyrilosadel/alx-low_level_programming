#include "variadic_functions.h"

/**
 * print_c - prints a char
 * @args: char to print
 */
void print_c(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_i - prints an integer
 * @args: integer to print
 */
void print_i(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_f - prints a float
 * @args: float to print
 */
void print_f(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_s - prints a string
 * @args: string to print
 */
void print_s(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}


