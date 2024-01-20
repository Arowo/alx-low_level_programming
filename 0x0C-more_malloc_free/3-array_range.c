#include <stdlib.h>
#include "main.h"

/**
 * array_range - array range
 * @min: min
 * @max: max
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int *array, i, j;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * ((max + 1) - min));
	if (!array)
		return (NULL);
	j = 0;
	for (i = 0; i < ((max + 1) - min); i++)
		array[j++] = min + i;
	return (array);
}
