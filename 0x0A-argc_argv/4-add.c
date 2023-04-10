#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers passed as arguments and prints the result
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments passed to the program
 *
 * Return: 0 if successful, 1 if there is an error
 */
int main(int argc, char *argv[])
{
int sum = 0;
char *c;
while (--argc)
{
for (c = argv[argc]; *c; c++)
{
if (*c < '0' || *c > '9')
{
return (printf("ERROR\n"), 1);
}
sum += atoi(argv[argc]);
}
}
printf("%d\n", sum);
return (0);
}
