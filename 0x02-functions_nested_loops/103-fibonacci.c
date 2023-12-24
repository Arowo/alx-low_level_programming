#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int limit = 4000000;
	int num1 = 1, num2 = 2, next;
	long int sum = 0;

	while (num1 <= limit)
	{
		if (num1 % 2 == 0)
			sum += num1;

		next = num1 + num2;
		num1 = num2;
		num2 = next;
	}

	printf("%ld\n", sum);

	return (0);
}
