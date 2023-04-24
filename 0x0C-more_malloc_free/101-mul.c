#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if a string is composed of digits
 * @s: the string to check
 *
 * Return: 1 if the string is composed of digits, 0 otherwise
 */
int is_digit(char *s)
{
    while (*s)
    {
        if (*s < '0' || *s > '9')
            return (0);
        s++;
    }

    return (1);
}

/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
    int i, j, len1, len2, *res;
    char *num1, *num2;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    num1 = argv[1];
    num2 = argv[2];

    if (!is_digit(num1) || !is_digit(num2))
    {
        printf("Error\n");
        return (98);
    }

    len1 = 0;
    while (num1[len1])
        len1++;

    len2 = 0;
    while (num2[len2])
        len2++;

    res = calloc(len1 + len2, sizeof(int));
    if (!res)
        return (1);

    for (i = len1 - 1; i >= 0; i--)
    {
        for (j = len2 - 1; j >= 0; j--)
        {
            res[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
            res[i + j] += res[i + j + 1] / 10;
            res[i + j + 1] %= 10;
        }
    }

    i = 0;
    while (i < len1 + len2 && res[i] == 0)
        i++;

    if (i == len1 + len2)
        putchar('0');

    while (i < len1 + len2)
        putchar(res[i++] + '0');

    putchar('\n');

    free(res);

    return (0);
}

