#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node @ given pos
 * @head: pointer to head node
 * @idx: index, where the node should be placed
 * @n: the data of the node
 * Return: NULL or listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;

	listint_t *temp, *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp != NULL)
	{
		if (count == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}
