#include "main.h"

/**
 * factorial - return factorial
 * @n: int positive
 * Return: return factorial of @n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
