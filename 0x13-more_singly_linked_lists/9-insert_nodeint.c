#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_lenx - find length of a list
 * @h: h
 * Return: length of list
 */
size_t listint_lenx(const listint_t *h)
{
	int len;
	const listint_t *current;

	current = h;
	len = 0;
	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}

/**
 * insert_nodeint_at_index - insert a node at index
 * @head: head
 * @idx: index
 * @n: n
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i, length;
	listint_t *curr, *prev, *newnode;

	length = listint_lenx(*head);
	if (idx > length)
		return (NULL);
	curr = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0 || *head == NULL || head == NULL)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (i = 0; i < idx && curr; i++)
	{
		prev = curr;
		curr = curr->next;
	}
	prev->next = newnode;
	newnode->next = curr;
	return (newnode);
}
