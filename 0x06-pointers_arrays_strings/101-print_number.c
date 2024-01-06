#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer
 * @n: Integer to be printed
 */
void print_number(int n)
{
    int divisor = 1;
    int digit;
    int i;

    if (n < 0)
    {
        putchar('-');
        n = -n;
    }

    while (n / divisor >= 10)
        divisor *= 10;

    for (; divisor != 0; divisor /= 10)
    {
        digit = (n / divisor) % 10;
        putchar('0' + digit);
    }
}
