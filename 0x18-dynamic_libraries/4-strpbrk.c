#include "main.h"
/**
  *_strpbrk - search the string for any of the set of bytes
  *@s: memory area to be filled
  *@accept: the set of bytes
  *Return:if a set is matched
  */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
