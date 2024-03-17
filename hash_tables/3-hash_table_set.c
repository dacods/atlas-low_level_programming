#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with key
 * Return:
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new_node;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = (value != NULL) ? strdup(value) : NULL;
	if (value != NULL && new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	if (ht->array[index] != NULL)
	{
		current = ht->array[index];
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	else
		ht->array[index] = new_node;

	return (1);
}
