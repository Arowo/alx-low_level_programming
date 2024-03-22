#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert at index
 * @h: head node
 * @idx: index a.k.a position
 * @n: number
 * Return: function that inserts a new node at a given position.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *prev;
	dlistint_t *temp = *h;
	unsigned int i = 0;

	if (!newNode)
		return (NULL);
	if (!(*h))
	{
		newNode = add_dnodeint(h, n);
		return (newNode);
	}
	newNode->next = NULL;
	newNode->n = n;
	newNode->prev = NULL;
	if (idx == 0)
	{
		newNode = add_dnodeint(h, n);
		return (newNode);
	}
	while (temp->next != NULL && i < idx)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}
	if (temp->next == NULL && i == idx - 1)
	{
		newNode = add_dnodeint_end(h, n);
		return (newNode);
	}
	else if (temp->next == NULL && i != idx)
		return (NULL);
	prev->next = newNode;
	newNode->prev = prev;
	newNode->next = temp;
	temp->prev = newNode;
	return (newNode);
}
