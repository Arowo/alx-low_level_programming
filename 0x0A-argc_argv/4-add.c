#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 * @ac: arg count
 * @av: arg vector
 * Return: return 0 or 1
 */
int main(int ac, char **av)
{
	int i, j, sum = 0, status = 1;

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
			{
				status = 0;
			}
		}
		sum += atoi(av[i]);
	}
	if (!status)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", sum);
	return (0);
}
