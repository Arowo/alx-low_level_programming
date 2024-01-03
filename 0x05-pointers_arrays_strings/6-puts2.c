#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: Pointer to the string.
 */
void puts2(char *str)
{
	int i = 0;

	/* Iterate through the string */
	while (str[i] != '\0')
	{
		/* Print the character if the index is even */
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}