#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 *
 * Return: The number of words
 */
int count_words(char *str)
{
    int count = 0, i = 0, len = strlen(str);

    while (i < len)
    {
        /* Skip leading spaces */
        while (i < len && str[i] == ' ')
            i++;

        /* Count non-space characters as word */
        if (i < len && str[i] != ' ')
        {
            count++;
            /* Skip word */
            while (i < len && str[i] != ' ')
                i++;
        }
    }

    return count;
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: Pointer to array of strings (words) or NULL if it fails
 */
char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return NULL;

    int words = count_words(str);
    if (words == 0)
        return NULL;

    char **result = malloc((words + 1) * sizeof(char *));
    if (result == NULL)
        return NULL;

    int i = 0, j = 0, len = strlen(str), word_len = 0;

    while (i < len)
    {
        /* Skip leading spaces */
        while (i < len && str[i] == ' ')
            i++;

        /* Allocate memory for the word */
        word_len = 0;
        while (i + word_len < len && str[i + word_len] != ' ')
            word_len++;

        result[j] = malloc((word_len + 1) * sizeof(char));
        if (result[j] == NULL)
        {
            /* Free previously allocated memory */
            for (int k = 0; k < j; k++)
                free(result[k]);
            free(result);
            return NULL;
        }

        /* Copy word into result array */
        strncpy(result[j], str + i, word_len);
        result[j][word_len] = '\0';

        j++;
        i += word_len;
    }

    result[j] = NULL;

    return result;
}
