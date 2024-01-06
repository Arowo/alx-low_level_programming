#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * infinite_add - add infinite
 * @n1: n1
 * @n2: n2
 * @r: r
 * @size_r: size_r
 * Return: return r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum = 0;
	int max_len = 0;
	int i, j, carry = 0;
	int len_1 = strlen(n1);
	int len_2 = strlen(n2);

	if (len_1 > len_2)
		max_len = len_1;
	else
		max_len = len_2;
	if (max_len + 1 >= size_r)
		return (0);
	r[max_len + 1] = '\0';
	for (i = len_1 - 1, j = len_2 - 1; i >= 0 || j >= 0; i--, j--)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		r[max_len] = (sum % 10) + '0';
		carry = sum / 10;
		max_len--;
	}
	if (carry)
	{
		if (max_len < 0)
			return (0);
		r[max_len] = carry + '0';
	}
	else if (max_len == 0)
		return (r + 1);
	return (r);
}
