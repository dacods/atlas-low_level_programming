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

	if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	current = ht->array[index];

	for (; current != NULL; current = current->next)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
			{
				return (0);
			}
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
