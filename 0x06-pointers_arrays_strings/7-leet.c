#include "main.h"
#include <string.h>
/**
 * leet - leet encoding
 * @str: string recovery
 * Return: return string
 */
char *leet(char *str)
{
	char *s = "aeotl";
	char *s2 = "AEOTL";
	char *numbers = "43071";
	unsigned int i = 0, j;

	while (str[i])
	{
		for (j = 0; j < strlen(s); j++)
		{
			if (str[i] == s[j] || str[i] == s2[j])
			{
				str[i] = numbers[j];
			}
		}
		i++;
	}
	return (str);
}
