#include <stdio.h>
#include "main.h"

/**
 * clear_bit - clear bit at index
 * @n: memory location of n
 * @index: index of n to clear
 * Return: return 1 sucess
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= (~(1 << index));
	return (1);
}
