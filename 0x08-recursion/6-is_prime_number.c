#include "main.h"

/**
 * _sqrt - find square root of n
 * @n: n
 * @x: x
 * Return: square root if found else x
 */
int _sqrt(int n, int x)
{
	if ((x * x) == n)
		return (x);
	if (x > n / 2)
		return (x);
	return (_sqrt(n, x + 1));
}

/**
 * generate_number - generates a number b/w 2 - sqrt(n)
 * @n: n
 * @x: x
 * Return: 1 | 0
 */
int generate_number(int n, int x)
{
	int sq_root = _sqrt(n, x);

	if (x == sq_root && n % x != 0)
	{
		return (1);
	}
	else if (x > sq_root || n % x == 0)
	{
		return (0);
	}
	return (generate_number(n, x + 1));
}

/**
 * is_prime_number - check if n is prime
 * @n: number
 * Return: return 1 | 0 for prime
 */
int is_prime_number(int n)
{
	int check;

	if (n < 2)
		return (0);
	check = generate_number(n, 2);
	return (check);
}
