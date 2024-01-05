#include "main.h"

/**
 * cap_string - Capitalizes all words in a string
 * @str: Pointer to the string
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
    int i, j;
    int sep_count = 13;
    char separators[] = " \t\n,;.!?\"(){}";

    /* Check if first character is a letter */
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 'a' + 'A';

    for (i = 1; str[i] != '\0'; i++)
    {
        /* Check if current character is a separator */
        for (j = 0; j < sep_count; j++)
        {
            if (str[i] == separators[j])
            {
                /* Check if next character is a letter */
                if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
                    str[i + 1] = str[i + 1] - 'a' + 'A';

                break;
            }
        }
    }

    return str;
}
