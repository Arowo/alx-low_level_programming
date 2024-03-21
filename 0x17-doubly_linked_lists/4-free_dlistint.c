#include "lists.h"

/**
 * free_dlistint - free the double linked list
 * @head: head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head, *prev = head;

	if (head == NULL)
		return;
	while (temp != NULL)
	{
		prev = temp;
		temp = temp->next;
		free(prev);
	}
}
