#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Function that inserts a new node
 * @head: pointer
 * @idx: integer
 * @n: integer
 * Return:
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current = *head;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (NULL);

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
