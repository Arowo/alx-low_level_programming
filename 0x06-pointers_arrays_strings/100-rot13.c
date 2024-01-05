#include "main.h"
#include <string.h>

/**
 * rot13 - encodes a string using rot13
 * @str: string input
 * Return: rot13 string
*/
char *rot13(char *str)
{
	char *rot0 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	unsigned int i = 0, j;

	while (str[i])
	{
		for (j = 0; j < strlen(rot0); j++)
		{
			if (str[i] == rot0[j])
			{
				str[i] = rot13[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
