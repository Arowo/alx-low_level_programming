#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - get the node at index
 * @head: head
 * @index: index
 * Return: nth node of a list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr;
	unsigned int i;

	curr = head;
	i = 0;
	while (curr && i != index)
	{
		curr = curr->next;
		i++;
	}
	if (curr == NULL)
		return (NULL);
	return (curr);
}
