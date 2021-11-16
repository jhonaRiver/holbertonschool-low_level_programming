#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: first node of the list
 * @n: int to be added
 * Return: address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	if (head != NULL)
	{
		temp = malloc(sizeof(listint_t));
		if (temp == NULL)
		{
			return (NULL);
		}
		temp->n = n;
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	return (0);
}
