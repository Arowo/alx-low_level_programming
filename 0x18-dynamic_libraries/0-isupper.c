#include "main.h"
/**
  *_isupper - chech the supper letter
  *@y: the checked number
  *Return: 1 for upper letter 0 for other
  */
int _isupper(int y)
{
	if (y >= 65 && y <= 90)
	{
		return (1);
	}
	return (0);
}
