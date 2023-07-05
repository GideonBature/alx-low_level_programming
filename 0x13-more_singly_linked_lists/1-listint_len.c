#include "lists.h"

/**
 * listint_len - returns the number of elements in ll
 * @h: head pointer
 *
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	const listint_t *ptr;

	if (h == NULL)
		return (count);

	ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
