#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - function that frees a list_t
 * @head: pointer to first node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr, *temp;

	ptr = head;

	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = temp;
	}
}
