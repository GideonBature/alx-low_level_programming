#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node
 * @head: pointer to head node
 * @index: nth number of node
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	temp = head;

	while (temp != NULL)
	{
		if (count == index)
			return (temp);

		temp = temp->next;
		count++;
	}
	return (NULL);
}
