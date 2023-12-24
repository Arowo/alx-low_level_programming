#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number of times table to print
 */
void print_times_table(int n)
{
	int row, col, result;

	if (n < 0 || n > 15)
		return;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			result = row * col;

			if (col == 0)
				printf("%d", result);
			else if (result < 10)
				printf(",   %d", result);
			else if (result < 100)
				printf(",  %d", result);
			else
				printf(", %d", result);
		}

		printf("\n");
	}
}
