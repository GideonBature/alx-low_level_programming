#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: pointer to address of head node
 *
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	int data;

	if (*head == NULL)
		return (0);

	temp = *head;

	*head = (*head)->next;

	data = temp->n;

	free(temp);

	return (data);
}
