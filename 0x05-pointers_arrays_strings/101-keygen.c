#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
    char password[101]; // Allocate enough space for the password

    srand(time(NULL)); // Seed the random number generator

    // Generate random characters for the password
    for (int i = 0; i < 100; i++)
    {
        // ASCII characters from '!' to '~' are considered valid
        password[i] = rand() % ('~' - '!') + '!';
    }

    password[100] = '\0'; // Add null terminator at the end

    printf("%s\n", password); // Print the generated password

    return (0);
}
