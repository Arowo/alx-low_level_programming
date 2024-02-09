#include "main.h"
#include <stdio.h>

/**
 * get_bit - get bit at a particular bit position
 * @n: decimal number
 * @index: position
 * Return: bit pos
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= sizeof(unsigned int) * 8)
	{
		return (-1);
	}
	bit = n & (1 << index);
	if (bit)
		return (1);
	return (bit);
}
