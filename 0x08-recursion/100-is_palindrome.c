#include "main.h"

/**
 * _putchar - Wthe standard output
 * @c: The character to be written
 *
 * Return: On success 1. On error, -1 is returned.
 */
int _putchar(char c);

/**
 * _strlen_recursion - Calculates the length of a string.
 * @s: The inpu\ng.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return 0;
    return 1 + _strlen_recursion(s + 1);
}

/**
 * is_palindrome_helper - Recursive helper fun check if a string is a palindrome.
 * @s: The input string.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if the string is 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
{
    if (start >= end)
        return 1;
    if (s[start] != s[end])
        return 0;
    return is_palindrome_helper(s, start + 1, end - 1);
}

/**
 * is_palindrome - Checs a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int len = _strlen_recursion(s);
    return is_palindrome_helper(s, 0, len - 1);
}
