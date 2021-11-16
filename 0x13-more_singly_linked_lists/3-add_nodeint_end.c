#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: first node of a list
 * @n: int to be added
 * Return: address of new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list, *temp;

	new_list = malloc(sizeof(listint_t));
	if (new_list == NULL)
	{
		return (NULL);
	}
	new_list->n = n;
	new_list->next = NULL;
	if (*head == NULL)
	{
		*head = new_list;
		return (*head);
	}
	else
	{
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_list;
		return (temp);
	}
	return (NULL);
}
