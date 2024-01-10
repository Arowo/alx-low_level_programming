#include "main.h"
#include <stdio.h>

/**
 * check_square - check if x can give me a square
 * @n: number
 * @x: x
 * Return: return check for square
 */
int check_square(int n, int x)
{
	if ((x * x) == n)
		return (x);
	if (x >= n / 2 || x < 0)
		return (-1);
	return (check_square(n, x + 1));
}

/**
 * _sqrt_recursion - square root of a number
 * @n: number
 * Return: return the sqrt(@n);
 */
int _sqrt_recursion(int n)
{
	int x;

	x = check_square(n, 1);
	return (x);
}
