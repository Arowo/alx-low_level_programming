#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - realloc
 * @ptr: ptr
 * @old_size: old size
 * @new_size: new size
 * Return: return reallocation
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *alloc;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr))
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		alloc = malloc(new_size);
		if (!alloc)
			return (NULL);
	}
	if (new_size > old_size && (ptr))
	{
		alloc = malloc(new_size);
		if (alloc == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
			alloc[i] = *((char *)ptr + 1);
		free(ptr);
	}
	return (alloc);
}
