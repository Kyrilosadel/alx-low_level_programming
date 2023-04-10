#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers passed as arguments and prints the result
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments passed to the program
 *
 * Return: 0 if successful, 1 if there is an error
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (0);
}
else
{
int sum;
sum = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", sum);
}
return (0);
}
