#include "function_pointers.h"

/**
 * array_iterator - iterate over an array
 * @array: array
 * @size: size
 * @action: action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	for (i = 0; i < size; i++)
		action(array[i]);
}
