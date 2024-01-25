#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point
 * @ac: ac
 * @av: av
 * Return: return 0;
 */
int main(int ac, char **av)
{
	int (*operator)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = get_op_func(av[2]);
	if (operator == 0)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operator(atoi(av[1]), atoi(av[3])));
	return (0);
}
