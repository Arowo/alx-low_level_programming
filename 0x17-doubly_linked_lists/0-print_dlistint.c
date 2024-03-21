#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - print all double linked list
 * @h: head of the list
 * Return: size of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node_count;
	const dlistint_t *temp;

	if (h == NULL)
		return (0);
	node_count = 0;
	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		node_count++;
		temp = temp->next;
	}
	return (node_count);
}
