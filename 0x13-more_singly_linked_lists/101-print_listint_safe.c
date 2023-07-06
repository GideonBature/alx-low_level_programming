#include "lists.h"
/**
 * print_listint_safe - prints a listint_t ll
 * @head: pointer to head node
 *
 * Return: size_t
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp, *loop_node;
	size_t i,  count = 0;

	temp = head;

	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;
		temp = temp->next;

		loop_node = head;

		for (i = 0; i < count; i++)
		{
			if (temp == loop_node)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				exit(98);
			}
			loop_node = loop_node->next;
		}
	}
	return (count);
}
