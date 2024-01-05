#include "main.h"
#include <string.h>

/**
 * _strncat - join n item in src
 * @dest: dest
 * @src: src
 * @n: n
 * Return: return dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
