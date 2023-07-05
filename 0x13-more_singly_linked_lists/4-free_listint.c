#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: the head node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr, *temp;

	ptr = head;

	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
}
