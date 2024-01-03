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
    int sum = 0;
    char password[7];
    int i, r;

    srand(time(0));

    for (i = 0; i < 6; i++)
    {
        r = rand() % 10;
        password[i] = '0' + r;
        sum += r;
    }

    password[i] = '0' + (10 - sum % 10);

    printf("%s", password);

    return 0;
}
