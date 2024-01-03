#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum = 2772;
    char password[9];
    int i, r;

    srand(time(0));

    for (i = 0; i < 8; i++)
    {
        r = rand() % 94 + 33;
        password[i] = r;
        sum -= r;
    }

    password[i] = sum;

    printf("%s", password);

    return 0;
}
