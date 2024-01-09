#include "main.h"

/**
 * _memcpy - copy memory
 * @dest: destination of the copy
 * @src: source of the copy
 * @n: n
 * Return: a pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
