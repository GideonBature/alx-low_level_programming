#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: head pointer
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	const list_t *ptr = NULL;

	ptr = h;

	if (ptr == NULL)
	{
		printf("[0] (nil)\n");
		return (count);
	}

	while (ptr != NULL)
	{
		printf("[%d] %s\n", ptr->len, ptr->str);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
