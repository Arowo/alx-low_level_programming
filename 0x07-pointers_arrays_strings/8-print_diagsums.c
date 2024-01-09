#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of diagonal
 * @a: array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int rows, sum_right = 0, sum_left = 0;

	for (rows = 0; rows < size; rows++)
	{
		sum_right += a[(rows * size) + rows];
		sum_left += a[((size - 1) * rows) + (size - 1)];
	}
	printf("%d, %d\n", sum_right, sum_left);
}
