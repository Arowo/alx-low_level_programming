#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string.
 *
 * Return: The converted integer value.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	/* Skip leading whitespace characters */
	while (s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r'))
		i++;

	/* Check for sign */
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	/* Convert string to integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		/* Check for overflow */
		if (result > (result * 10 + (s[i] - '0')))
		{
			if (sign == 1)
				return 2147483647;
			else
				return -2147483648;
		}

		result = result * 10 + (s[i] - '0');
		i++;
	}

	return result * sign;
}