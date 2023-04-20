#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - chesk the code
 * @argc: the number of argc
 * @argv: argument vector
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
char *p = (char *)main;
int b;

if (argc != 2)
printf("Error\n"), exit(1);
b = atoi(argv[1]);
if (b < 0)
printf("Error\n"), exit(2);
while (b--)
printf("%02hhx%s", *p++, b ? " " : "\n");
return (0);
}
