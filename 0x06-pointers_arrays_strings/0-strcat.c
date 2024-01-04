#include "main.h"

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: The destination string.
 * @src: The source string to be appended.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
    int dest_len = 0, i = 0;

    /* Get the length of dest */
    while (dest[dest_len] != '\0')
        dest_len++;

    /* Append src to dest */
    while (src[i] != '\0')
    {
        dest[dest_len + i] = src[i];
        i++;
    }

    /* Add the null terminator */
    dest[dest_len + i] = '\0';

    return dest;
}
