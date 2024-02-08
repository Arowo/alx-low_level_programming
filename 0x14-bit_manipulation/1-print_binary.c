#include <stdio.h>
#include "main.h"

/**
 * print_binary - print binary number of n
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	int count_1_bit = 0;
	unsigned long int number;
	int i;

	for (i = 63; i >= 0; i--)
	{
		number = (n >> i);
		if (number & 1)
		{
			_putchar('1');
			count_1_bit++;
		}
		else if (count_1_bit)
			_putchar('0');
	}
	if (count_1_bit == 0)
		_putchar('0');
}
