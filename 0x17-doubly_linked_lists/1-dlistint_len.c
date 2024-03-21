#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - returns the number of element in a linked list
 * @h: head node
 * Return: number of element in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;
	const dlistint_t *temp = h;

	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
