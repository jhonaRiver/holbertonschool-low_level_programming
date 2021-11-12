#include "lists.h"

/**
 * free_list - Frees a list
 * @head: first node of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
