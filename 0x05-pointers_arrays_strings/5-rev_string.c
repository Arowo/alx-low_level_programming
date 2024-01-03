#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string.
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	char temp;

	/* Calculate the length of the string */
	while (s[length] != '\0')
		length++;

	/* Reverse the string */
	length -= 1;
	while (start < length)
	{
		temp = s[start];
		s[start] = s[length];
		s[length] = temp;
		start++;
		length--;
	}
}
