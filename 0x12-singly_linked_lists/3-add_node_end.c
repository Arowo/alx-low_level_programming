#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add a node at the end of a list
 * @head: head node
 * @str: str
 * Return: return head;
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *current = *head;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	if (!current)
	{
		newnode->next = NULL;
		*head = newnode;
		return (*head);
	}
	while (current->next)
		current = current->next;
	current->next = newnode;
	newnode->next = NULL;
	return (newnode);
}
