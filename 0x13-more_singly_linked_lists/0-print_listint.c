#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print list
 * @h: h
 * Return: length of list index
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *sesion  = h;
	size_t count = 0;

	while (sesion)
	{
		printf("%d\n", sesion->n);
		count++;
		sesion = sesion->next;
	}
	return (count);
}
