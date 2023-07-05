#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_listint - prints all the elements of a listint_t list
 *@h: head parameter
 *
 * Return: struct
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	const listint_t *ptr;

	if (h == NULL)
		return (count);

	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
