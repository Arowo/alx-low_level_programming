#include "main.h"
/**
  *_strchr - locate a character in a string
  *@s: memory area to be filled
  *@c:the character to be located
  *Return: if c is found
  */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
