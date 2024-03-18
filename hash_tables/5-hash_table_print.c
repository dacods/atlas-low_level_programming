#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table
 * @ht: hash table
 * Return: 0
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int k = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (k == 1)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			k = 1;
			current = current->next;
		}
	}
	printf("}\n");
}
