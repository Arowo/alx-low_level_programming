#include "main.h"
/**
  *_strcpy - copy the string pointed to
  *@dest: char to check
  *@src: char to check
  *Return: 0
  */
char *_strcpy(char *dest, char *src)
{
	int b;

	for (b = 0; src[b] != '\0'; b++)
		dest[b] = src[b];
	dest[b] = '\0';
	return (dest);
}
