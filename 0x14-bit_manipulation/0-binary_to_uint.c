#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - binary conversion
 * @b: first input
 * Return: return decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int deci = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		deci = (2 * deci) + (b[i] - '0');
	}
	return (deci);
}
