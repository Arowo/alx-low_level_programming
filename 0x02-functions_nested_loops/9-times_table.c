#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * Return: No return value (void function)
 */
void times_table(void)
{
    int i, j, result;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            result = i * j;

            /* Print result with proper formatting */
            if (result < 10 && j > 0)
                _putchar(' ');
            else if (j > 0)
                _putchar((result / 10) + '0');

            _putchar((result % 10) + '0');

            if (j < 9)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
        _putchar('\n');
    }
}
