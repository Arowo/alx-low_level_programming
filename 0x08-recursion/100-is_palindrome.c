#include "main.h"
#include <stdio.h>

/**
 * string_len - gets the length of a string
 * @s: string
 * Return: return string len
 */
int string_len(char *s)
{
	int count;

	count = 0;
	if (*s == '\0')
		return (count);
	count++;
	return (count + string_len(s + 1));
}

/**
 * indices - indices compare two characters if they match
 * @s: string
 * @x: start
 * @y: end
 * Return: return 0 | 1
 */
int indices(char *s, int x, int y)
{
	char c1, c2;

	c1 = *(s + x);
	c2 = *(s + y);
	if (c1 != c2)
		return (0);
	if (x >= y)
		return (1);
	return (indices(s, x + 1, y - 1));
}

/**
 * is_palindrome - check if a string is palindrome or node
 * @s: string
 * Return: return true or false
 */
int is_palindrome(char *s)
{
	int end;
	int start;

	if (*s == ' ')
		return (1);
	end = string_len(s);
	if (end < 2)
		return (1);
	start = 0;
	return (indices(s, start, end - 1));
}
