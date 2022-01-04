#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: first node of the list
 * @index: node that should be deleted
 * Return: 1 success, -1 fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new = *head, *temp;
	unsigned int count;

	if (!head || !*head)
		return (-1);
	temp = *head;
	for (count = 1; temp != NULL && count != index; count++)
		temp = temp->next;
	if (index > count)
		return (-1);
	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}
	else
	{
		new = temp->next;
		temp->next = new->next;
		free(new);
		return (1);
	}
	return (-1);
}
