#include <stddef.h>

/* Prototype for _strchr function */
char *_strchr(char *s, char c);

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input string
 * @accept: string containing the characters to search for
 * Return: a pointer to the first occurrence in s of any character in accept,
 *         or NULL if no such character is found
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s != '\0')
    {
        if (_strchr(accept, *s) != NULL)
            return s;
        s++;
    }

    return NULL;
}

