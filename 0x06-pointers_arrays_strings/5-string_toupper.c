#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * string_toupper - function that convert a string to uppercase
 * @str: string
 * Return: string
*/
char *string_toupper(char *str)
{
	int i = 0, str_to_int;

	while (str[i])
	{
		str_to_int = str[i];
		if (str_to_int >= 97 && str_to_int <= 122)
		{
			str_to_int -= 32;
			str[i] = str_to_int;
		}
		i++;
	}
	return (str);
}
