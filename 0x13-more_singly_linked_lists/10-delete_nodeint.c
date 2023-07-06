#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to the head node
 * @index: position to be removed
 *
 * Return: 1 or 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *temp, *next_node;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && count < (index - 1))
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL || temp->next == NULL)
		return (-1);

	next_node = temp->next;
	temp->next = next_node->next;
	free(next_node);

	return (1);
}
