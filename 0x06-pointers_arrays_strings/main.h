#ifndef MAIN_H
#define MAIN_H

char *_strcat(char *dest, char *src);

#include <stddef.h>

char *_strncat(char *dest, const char *src, size_t n);

char *_strncpy(char *dest, char *src, int n);

int _strcmp(char *s1, char *s2);

#endif /* MAIN_H */
