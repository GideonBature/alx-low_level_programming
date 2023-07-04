#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to a pointer
 * @str: pointer to string
 * Return: node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	ptr = *head;

	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = temp;

	return (temp);
}
