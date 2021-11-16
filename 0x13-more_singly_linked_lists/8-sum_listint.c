#include "lists.h"

/**
 * sum_listint - sums all the data of a list
 * @head: first node of the list
 * Return: the sum of all the data of the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
