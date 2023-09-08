#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: key/value
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	char *seperator = NULL;

	if (ht)
	{
		printf("{");
		while (i < ht->size)
		{
			while (ht->array[i])
			{
				if (seperator)
					printf("%s", seperator);
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				ht->array[i] = ht->array[i]->next;
				seperator = ", ";
			}
			i++;
		}
		printf("}\n");
	}
}
