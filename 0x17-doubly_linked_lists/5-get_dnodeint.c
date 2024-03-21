#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: head node
 * @index: index
 * Return: node[index]
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (NULL);
	return (temp);
}
