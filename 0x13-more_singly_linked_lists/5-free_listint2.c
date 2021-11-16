#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: first node of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head);
		*head = (*head)->next;
		free(temp);
	}
	free(*head);
	head = NULL;
}
