/* 0-strcat.c */

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    int dest_len = 0, i;

    while (dest[dest_len] != '\0')
        dest_len++;

    for (i = 0; src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];

    dest[dest_len + i] = '\0';

    return dest;
}
