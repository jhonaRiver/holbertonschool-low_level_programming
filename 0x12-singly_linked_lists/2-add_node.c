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
		temp->len = _strlen(str);
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	return (0);
}

/**
 * _strlen - length of a string
 * @s: string to count
 * Return: length of s
 */
int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}
	return (c);
}
