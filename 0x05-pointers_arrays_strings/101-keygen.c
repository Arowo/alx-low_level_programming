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
    char password[12]; // Adjusted password length to 11 characters + null terminator
    int i, r;

    srand(time(0));

    for (i = 0; i < 11; i++) // Loop to fill the entire password array except the last character
    {
        r = rand() % 94 + 33; // Generate characters in the range [33, 126]
        password[i] = r;
        sum += r;
    }

    password[i++] = (2772 - sum) % 94 + 33; // Adjust the last character based on the desired sum
    password[i] = '\0'; // Terminate the string

    printf("%s\n", password);

    return 0;
}
