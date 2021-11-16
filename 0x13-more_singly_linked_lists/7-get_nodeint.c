#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: first node of the list
 * @index: index of the node
 * Return: nth node of the list or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; head != NULL && count != index; count++)
	{
		head = head->next;
	}
	return (head);
}
