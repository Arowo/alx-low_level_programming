#include "main.h"
/**
  *_strlen - the length of string
  *@s: char to check
  *Description: return the length of string
  *Return: 0 sucess
  */
int _strlen(char *s)
{
	int c = 0;

	for (; *s++;)
		c++;
	return (c);
}
