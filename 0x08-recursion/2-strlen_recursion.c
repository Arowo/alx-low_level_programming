#include "main.h"

/**
 * _strlen_recursion - gets the length of a string
 * @s: string
 * Return: return the length of the string
 */
int _strlen_recursion(char *s)
{
	int count;

	count = 0;
	if (*s == '\0')
		return (count);
	count++;
	return (_strlen_recursion(s + 1) + count);
}
