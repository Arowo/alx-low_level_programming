#include "main.h"
#include <stdio.h>

/**
 * get_endianness - get endianess
 * Return: 1 on success
 */

int get_endianness(void)
{
	unsigned int end = 1;
	char *c = (char *) &end;

	return (*c);
}
