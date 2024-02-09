#include "main.h"
#include <stdio.h>

/**
 * set_bit - set bit @ index
 * @n: memroy location of n number
 * @index: position
 * Return: 1 (success)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
