#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - find list of list_t
 * @h: h
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
	size_t n;
	const list_t *node = h;

	if (!h)
		return (0);
	n = 0;
	while (node)
	{
		n++;
		node = node->next;
	}
	return (n);
}
