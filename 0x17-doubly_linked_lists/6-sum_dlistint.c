#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of the list
 * @head: head node
 *
 * Return: all sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
