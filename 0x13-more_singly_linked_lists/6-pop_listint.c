#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a list
 * @head: head
 * Return: n;
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *curr;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	curr = *head;
	*head = curr->next;
	free(curr);
	return (n);
}
