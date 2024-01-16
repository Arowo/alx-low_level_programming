/* 3-puts.c */

#include <unistd.h>

/**
 * _puts - writes a string to the standard output
 * @s: input string
 */
void _puts(char *s)
{
    while (*s != '\0')
    {
        write(1, s, 1);
        s++;
    }
    write(1, "\n", 1);
}

