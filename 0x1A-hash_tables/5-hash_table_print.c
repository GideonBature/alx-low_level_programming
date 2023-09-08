#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: key/value
*/
void hash_table_print(const hash_table_t *ht)
{
	int i = 0;

	if (ht)
	{
		while (i < ht->size)
		{
			while (ht->array[i])
			{
				ht->array[i] = ht->array[i]->next;
			}
			i++;
		}
	}
}
