#include "lists.h"
/**
 * free_listint_safe - frees listint_t list
 * @h: pointer to head node
 *
 * Return: size_t
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *next_node;
	size_t count = 0;

	temp = *h;

	while (temp != NULL && temp != *h)
	{
		next_node = temp->next;
		free(temp);
		count++;
		temp = next_node;
	}

	*h = NULL;

	return (count);
}
