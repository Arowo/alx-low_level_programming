#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: head
 * @index: index
 * Return: 1 if success -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr;
	listint_t *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	i = 0;
	if (index == i)
	{
		curr = (*head)->next;
		free(*head);
		*head = curr;
		return (1);
	}
	curr = *head;
	while (i < index && curr)
	{
		if (!curr->next)
			return (-1);
		prev = curr;
		curr = curr->next;
		i++;
	}
	prev->next = curr->next;
	free(curr);
	return (1);
}
