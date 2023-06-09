#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number ofline arguments
 * @argv: An array containd-line arguments
 *
 * Return: 0 on success,r occurs
 */
int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc < 2)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
int num = atoi(argv[i]);
if (num <= 0)
{
printf("Error\n");
return (1);
}
sum += num;
}

printf("%d\n", sum);

return (0);
}

