#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - entry point
 * @ac: argument count
 * @av: argument vector
 * Return: return 0 on success
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(av[1]) * atoi(av[2]));
	return (0);
}
