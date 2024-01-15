#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - duplicated a string
 * @str: string
 * Return: return dup of string
 */
char *_strdup(char *str)
{
	if (!str)
		return (NULL);
	return (strdup(str));
}
