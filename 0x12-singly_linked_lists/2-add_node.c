#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: first node of the list
 * @str: string to be added
 * Return: address of new elemenor NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
		{
			return (NULL);
		}
		temp->str = strdup(str);
		temp->next = *head;
		*head = temp;
	}
	return (0);
}
