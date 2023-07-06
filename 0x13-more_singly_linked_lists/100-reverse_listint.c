#include "lists.h"
/**
 * reverse_listint - reverses a listint_t ll
 * @head: pointer to head of node
 *
 * Return: listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first, *rest;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);

	first = *head;
	rest = (*head)->next;

	*head = reverse_listint(&rest);

	first->next->next = first;
	first->next = NULL;

	return (*head);
}
