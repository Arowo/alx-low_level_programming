#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete a node
 * @head: head node
 * @index: index node
 * Return: return -1 | 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev, *temp;
	unsigned int i = 0;

	temp = *head;
	if (temp != NULL)
		while (temp->prev != NULL)
			temp = temp->prev;
	while (temp != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = temp->next;
				if (*head != NULL)
				(*head)->prev = NULL;
			}
			else
			{
				prev->next = temp->next;
				if (temp->next != NULL)
				temp->next->prev = prev;
			}
			free(temp);
			return (1);
		}
		prev = temp;
		temp = temp->next;
		i++;
	}
	return (-1);
}
