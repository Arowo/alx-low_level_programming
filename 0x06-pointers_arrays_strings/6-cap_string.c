#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * cap_string - capitalize any string you see in str
 * @str: string to be capitalized
 * Return: return capitalized str
*/
char *cap_string(char str[])
{
	char *d = ",;.!?(){}";
	unsigned int i = 1, j;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i])
	{
		for (j = 0; j < strlen(d) - 1; j++)
		{
			if (str[i - 1] == d[j] || str[i - 1] == ' ' ||
			str[i - 1] == '\t' || str[i - 1] == '"' ||
			str[i - 1] == '\n')
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
				}
			}
		}
		i++;
	}
	return (str);
}
