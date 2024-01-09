#include <stdio.h>
#include "main.h"

/**
 * _memset - fill s bytes with b
 * @s: allocsted space
 * @b: character to fill
 * @n: enr point
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		s[i++] = b;
	return (s);
}
