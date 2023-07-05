#include "lists.h"
/**
 * sum_listint - sums all the data (n)
 * @head: pointer to head of ll
 *
 * Return: 0 or int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
