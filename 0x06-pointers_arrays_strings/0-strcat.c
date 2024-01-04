#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string to be appended
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    int dest_len = 0, i = 0;

    while (dest[dest_len] != '\0')  /* Get the length of dest */
        dest_len++;

    while (src[i] != '\0')
    {
        dest[dest_len + i] = src[i];  /* Append src to dest */
        i++;
    }

    dest[dest_len + i] = '\0';  /* Add the null terminator */

    return dest;
}
