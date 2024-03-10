#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of a list
 * @head: pointer
 * @index: index
 * Return: 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}

	return (NULL);
}
