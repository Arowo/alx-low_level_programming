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
    char password[13]; // Adjusted password length to 12 characters + null terminator
    int i, r;

    srand(time(0));

    for (i = 0; i < 12; i++) // Loop to fill the entire password array
    {
        r = rand() % 95 + 32; // Generate characters in the range [32, 126]
        password[i] = r;
        sum += r;
    }

    password[i++] = (sum % 95) + 32; // Adjust the last character based on the sum of ASCII values
    password[i] = '\0'; // Terminate the string

    printf("%s\n", password);

    return 0;
}
