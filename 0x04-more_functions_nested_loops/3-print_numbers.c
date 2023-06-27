#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
}

