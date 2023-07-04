#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - returns number of elements in a linked list_t list
 * @h: header argument
 * Return: count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr;

	if (h == NULL)
		return (count);

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
