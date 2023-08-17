#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlist_t list
 * @h: the head pointer
 *
 * Return: elements of dlistint_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		exit(1);

	temp = h;

	if (temp == NULL)
		return (1);

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
