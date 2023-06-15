#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int multiply_numbers(const char *num1, const char *num2);

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    for (int i = 0; num1[i] != '\0'; i++)
    {
        if (!isdigit(num1[i]))
        {
            printf("Error\n");
            return 98;
        }
    }

    for (int i = 0; num2[i] != '\0'; i++)
    {
        if (!isdigit(num2[i]))
        {
            printf("Error\n");
            return 98;
        }
    }

    int result = multiply_numbers(num1, num2);
    printf("%d\n", result);

    return 0;
}

int multiply_numbers(const char *num1, const char *num2)
{
    int result;
    char *endptr1, *endptr2;
    long long_num1, long_num2;

    long_num1 = strtol(num1, &endptr1, 10);
    long_num2 = strtol(num2, &endptr2, 10);

    if (*endptr1 != '\0' || *endptr2 != '\0' || long_num1 <= 0 || long_num2 <= 0)
    {
        printf("Error\n");
        exit(98);
    }

    result = (int)(long_num1 * long_num2);
    return result;
}

