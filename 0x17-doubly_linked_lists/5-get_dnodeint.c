#include "lists.h"
/**
 * get_dnodeint_at_index - nth node of a linked list
 * @head: head node
 * @index: the index of the node starting from 0
 *
 * Return: nth node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = index;

	dlistint_t *temp;

	temp = head;

	if (temp == NULL)
		return (NULL);

	while (count != 0)
	{
		temp = temp->next;

		if (temp == NULL)
			return (NULL);
		count--;
	}
	return (temp);
}
