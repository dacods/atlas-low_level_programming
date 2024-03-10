#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Function that deletes the node at index
 * @head: pointer
 * @index: integer
 * Return: 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *prev = NULL;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current != NULL && count < index)
	{
		prev = current;
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);

	return (1);
}
