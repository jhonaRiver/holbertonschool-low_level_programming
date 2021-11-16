#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list
 * @h: linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}
	return (count);
}
