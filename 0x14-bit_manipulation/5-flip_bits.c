#include <stdio.h>
#include "main.h"

/**
 * flip_bits - flip_bits flip bit status
 * @n: input 1
 * @m: input 2
 * Return: flip_bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	unsigned int count = 0;

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if ((m & 1) != (n & 1))
		{
			count++;
		}
		n >>= 1;
		m >>= 1;
	}
	return (count);
}
