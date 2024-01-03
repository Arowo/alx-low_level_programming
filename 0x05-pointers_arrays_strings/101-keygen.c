#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - entry point
 * Return: return 0
 */
int main(void)
{
	int get_random_number, password_init = 2772;
	int i = 0, j;
	char password[100];
	time_t t;

	srand((int) time(&t));
	while (password_init > 126)
	{
		get_random_number = rand() % 126;
		password[i] = get_random_number;
		password_init -= get_random_number;
		i++;
	}
	if (get_random_number > 0)
		password[i] = get_random_number;
	else
		i--;
	for (j = 0; j <= i; j++)
	{
		printf("%c", password[j]);
	}
	return (0);
}
