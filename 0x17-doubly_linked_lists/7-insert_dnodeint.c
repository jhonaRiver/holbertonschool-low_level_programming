#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: node of the list
 * @idx: where the new node should be added
 * @n: node to insert
 * Return: address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int count;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	temp = *h;
	for (count = 1; temp != NULL && count != idx; count++)
		temp = temp->next;
	if (idx > count)
		return (NULL);
	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
	}
	else
	{
		new_node->next = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
