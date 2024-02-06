#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sum list of integers
 * @head: head
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	listint_t *curr;
	int sum;

	sum = 0;
	curr = head;
	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
