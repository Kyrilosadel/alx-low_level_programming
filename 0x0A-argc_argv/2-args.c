#include <stdio.h>

/**
 * main - Entint
 * @argc: The number ine arguments
 * @argv: An array containinguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}

