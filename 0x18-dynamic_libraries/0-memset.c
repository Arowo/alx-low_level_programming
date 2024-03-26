#include "main.h"
/**
  *_memset - fills memory with constant bite
  *@s: memory area to be filled
  *@b: char to copy
  *@n:number of time
  *Return:pointer to the memory area
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
