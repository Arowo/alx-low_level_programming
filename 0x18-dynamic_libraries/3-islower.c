#include "main.h"
/**
  *_islower - shows 1 if the input is a
  *lowercase character. Another cases, shows
  *0
  *@c: the character is ASCII code
  *Description: 'prints the alphabet in lower case'
  *Return: void
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
