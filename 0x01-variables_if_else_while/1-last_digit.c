#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
int digitof = n % 10;

if (digitof > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, digitof);
}
else if (digitof == 0)
{
printf("Last digit of %d is %d and is 0\n", n, digitof);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digitof);
}

return (0);
}

