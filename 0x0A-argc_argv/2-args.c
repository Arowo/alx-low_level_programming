#include <stdio.h>

/**
 * main - entry point
 * @ac: ac
 * @av: argument vector
 * Return: return 0 on success
 */
int main(int ac, char **av)
{
	int i;

	for (i = 0; i < ac; i++)
	{
		printf("%s\n", av[i]);
	}
	return (0);
}
