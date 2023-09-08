#include "hash_tables.h"

/**
 * hash_table_set - adds element to hash table
 * @ht: hash table
 * @key: key
 * @value: value of key
 *
 * Return: 0(failure) or 1(success)
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *value_copy = NULL, *key_copy = NULL;
	hash_node_t *new_node = NULL;

	if (!ht || !key)
		return (0);

	value_copy = strdup(value);
	key_copy = strdup(key);

	if (!value_copy || !key_copy)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] && *(ht->array[index]->key) == *key)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = value_copy;
		return (1);
	}
	new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
	{
		free(value_copy);
		free(key_copy);
		return (0);
	}

	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = NULL;

	if (ht->array[index])
	{
		new_node = ht->array[index];
	}
	ht->array[index] = new_node;
	return (1);
}
