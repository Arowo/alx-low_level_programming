#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - string concatenates
 * @s1: s1
 * @s2: s2
 * Return: concatenation of two strings
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	str = malloc(strlen(s1) + strlen(s2) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (*s1)
	{
		str[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		str[i] = *s2;
		i++;
		s2++;
	}
	str[i] = '\0';
	return (str);
}
