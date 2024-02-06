#include "lists.h"
#include <stdlib.h>


/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: head
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *nextnode;

	prev = NULL;
	while (*head)
	{
		nextnode = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nextnode;
	}
	*head = prev;
	return (*head);
}
