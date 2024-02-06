#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list;
 * @head: head
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count;
	const listint_t *curr;

	curr = head;
	node_count = 0;
	while (curr)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		if (curr <= curr->next)
		{
			printf("-> [%p] %d\n", (void *)curr->next, curr->next->n);
			exit(98);
		}
		curr = curr->next;
		node_count++;
	}
	return (node_count);
}
