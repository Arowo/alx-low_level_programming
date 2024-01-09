#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: bytes given s.
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0;

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == ' ')
			break;
		for (j = 0; j < strlen(accept); j++)
		{
			if (accept[j] == s[i])
				len++;
		}
	}
	return (len);
}
