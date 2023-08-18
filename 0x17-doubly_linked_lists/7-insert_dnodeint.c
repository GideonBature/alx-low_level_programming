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
	unsigned int count = 0, check = 0;

	dlistint_t *new_node, *temp, *temp2, *tmp;

	new_node = malloc(sizeof(dlistint_t));

	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;

	tmp = (*h);

	while (tmp != NULL)
	{
		tmp = tmp->next;
		check++;
	}
	if (idx - 1 >= check)
		return (NULL);

	temp = (*h);

	if (idx == 0)
	{
		return (insert_at_head(h, n));
	}

	while (count < idx - 1)
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

/**
 * insert_at_head - insert the node at head
 * @h: head pointer
 * @n: data
 *
 * Return: dlistint_t
 */
dlistint_t *insert_at_head(dlistint_t **h, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;

	if (*h == NULL)
	{
		new_node->next = new_node;
		new_node->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	(*h)->prev = new_node;
	new_node->next = *h;
	*h = new_node;

	return (new_node);
}
