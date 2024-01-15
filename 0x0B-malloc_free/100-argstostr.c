#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * argstostr - its the pebble in your shoe
 * @ac: ac
 * @av: av
 * Return: a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *string;
	int i, j, c;

	if (!ac || !av)
		return (NULL);
	for (c = i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}
	string = malloc((c + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);
	for (i = j = 0; i < ac; i++)
	{
		while (*av[i] != '\0')
		{
			string[j++] = *av[i];
			av[i]++;
		}
		string[j++] = '\n';
	}
	string[j] = '\0';
	return (string);
}
