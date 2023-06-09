#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entryt
 * @argc: The number of come arguments
 * @argv: An array containingine arguments
 *
 * Return: 0 on success, 1 i is incorrect
 */
int main(int argc, char *argv[])
{
int num1, num2, result;

if (argc != 3)
{
printf("Error\n");
return (1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

result = num1 *num2;

printf("%d\n", result);

return (0);
}

