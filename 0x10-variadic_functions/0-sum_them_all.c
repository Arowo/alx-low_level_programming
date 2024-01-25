#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum them all
 * @n: n
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list list;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (i = sum = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
