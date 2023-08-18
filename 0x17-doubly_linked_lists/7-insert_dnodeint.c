#include "lists.h"
/**
 * insert_dnodeint_at_index - insert new node at given pos
 * @h: pointer to head pointer
 * @idx: index of position
 * @n: data
 *
 * Return: address of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;

	dlistint_t *new_node, *temp, *temp2;

	new_node = malloc(sizeof(dlistint_t));

	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		add_dnodeint(h, n);
	}

	temp = (*h);

	while ((count < idx - 1) && (temp->next != NULL))
	{
		temp = temp->next;
		count++;
	}
	temp2 = temp->next;
	temp->next = new_node;
	temp->prev = new_node;
	new_node->next = temp2;
	new_node->prev = temp;

	return (new_node);
}
