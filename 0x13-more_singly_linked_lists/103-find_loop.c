#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head
 *
 * Return: the address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *curr;
	listint_t *loop_loc;

	if (head == NULL)
		return (NULL);
	curr = head;
	while (curr)
	{
		if (curr <= curr->next)
		{
			loop_loc = curr->next;
			break;
		}
		curr = curr->next;
	}
	if (!curr)
		return (NULL);
	return (loop_loc);
	return (NULL);
}
