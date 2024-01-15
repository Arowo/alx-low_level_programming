#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array
 * @width: width
 * @height: height
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int **a2d, i, j;

	if (width == 0 || height == 0)
		return (NULL);
	a2d = (int **)malloc(sizeof(int *) * height);
	if (a2d == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a2d[i] = (int *)malloc(sizeof(int) * width);
		if (a2d[i] == NULL)
		{
			while (i--)
			{
				free(a2d[i]);
			}
			free(a2d);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			a2d[i][j] = 0;
	}
	return (a2d);
}
