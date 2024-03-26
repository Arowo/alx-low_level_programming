#include "main.h"
/**
  *_isdigit - check for it
  *@x: the character to be check
  *Return: 1 for digit and 0 for anything else
  */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
