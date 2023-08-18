#include "lists.h"

/**
 * sum_dlistint - returns sum of all data(n) of a dlistint_t linked list
 * @head: head node pointer
 *
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	dlistint_t *temp;

	temp = head;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
