#include "lists.h"
/**
 * free_listint2 - frees a listint_t
 * @head: pointer to head node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *temp;

	if (head == NULL || *head == NULL)
		return;

	ptr = *head;

	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
	*head = NULL;
}
