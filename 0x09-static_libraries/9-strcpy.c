/* 9-strcpy.c */

/**
 * _strcpy - copies the string pointed to by src to the buffer pointed to by dest
 * @dest: destination buffer
 * @src: source string
 * Return: a pointer to the destination string dest
 */
char *_strcpy(char *dest, char *src)
{
    int i;

    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];

    dest[i] = '\0';

    return dest;
}
