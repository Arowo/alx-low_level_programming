#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print opcodes
 * @array: array
 * @n: n
 */
void print_opcodes(char *array, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", array[i]);
		if (i < n - 1)
			printf(" ");
	}
	putchar('\n');
}

/**
 * main - entry point
 * @ac: ac
 * @av: av
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int i;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(av[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, i);
	return (0);
}
