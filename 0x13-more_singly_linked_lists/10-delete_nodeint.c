#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a list
 * @head: first node of the list
 * @index: index of the node that should be deleted
 * Return: 1 success, -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new = *head, *temp;
	unsigned int count;

	temp = *head;
	for (count = 1; temp != NULL && count != index)
	{
		temp = temp->next;
	}
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
