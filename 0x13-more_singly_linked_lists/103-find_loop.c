#include "lists.h"
/**
 * find_listint_loop - finds loop in a ll
 * @head: pointer to head node
 *
 * Return: listint_t
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t, *h;

	t = head;
	h = head;

	while (t && h && h->next)
	{
		t = t->next;
		h = h->next->next;

		if (t == h)
		{
			t = head;

			while (t != h)
			{
				t = t->next;
				h = h->next;
			}
			return (h);
		}
	}
	return (NULL);
}
