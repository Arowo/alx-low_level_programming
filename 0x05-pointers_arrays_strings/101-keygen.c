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
    char password[7];
    int i;

    srand(time(0));

    for (i = 0; i < 6; i++)
    {
        password[i] = '!' + rand() % 94;
    }

    password[i] = '\0';

    printf("%s", password);

    return 0;
}
