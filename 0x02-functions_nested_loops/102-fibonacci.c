#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int count, limit;
	long int num1, num2, next;

	count = 0;
	limit = 50;
	num1 = 1;
	num2 = 2;

	printf("%ld, %ld", num1, num2);

	for (count = 2; count < limit; count++)
	{
		next = num1 + num2;
		printf(", %ld", next);
		num1 = num2;
		num2 = next;
	}

	printf("\n");

	return (0);
}
