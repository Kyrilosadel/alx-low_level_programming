#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k;

for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
for (k = j + 1; k < 10; k++)
{
putchar('0' + i);
putchar(',');
putchar(' ');
putchar('0' + j);
putchar(',');
putchar(' ');
putchar('0' + k);
putchar('\n');
}
}
}

return (0);
}
