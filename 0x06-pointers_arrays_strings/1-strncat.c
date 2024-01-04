#include "main.h"
#include <stddef.h>

char *_strncat(char *dest, const char *src, size_t n)
{
    char *ptr = dest;

    /*Move the pointer to the end of the destination string*/
    while (*ptr != '\0')
        ptr++;

    /* Copy at most n bytes from src to the end of dest*/
    while (*src != '\0' && n > 0)
    {
        *ptr = *src;
        ptr++;
        src++;
        n--;
    }

    /* Add the terminating null byte*/
    *ptr = '\0';

    return dest;
}
