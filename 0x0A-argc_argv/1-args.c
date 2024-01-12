#include <stdio.h>

/**
 * main - entry point
 * @ac: ac
 * @av: argument vector
 * Return: return 0 on success
 */
int main(int ac, char **av __attribute__((unused)))
{
	printf("%d\n", ac - 1);
	return (0);
}
