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
    char password[15];
    int i, r;

    srand(time(0));

    for (i = 0; i < 10; i++)
    {
        r = rand() % 94 + 33;
        password[i] = r;
        sum += r;
    }

    password[i++] = (sum % 94) + 33;
    password[i] = '\0';

    printf("%s\n", password);

    return 0;
}
