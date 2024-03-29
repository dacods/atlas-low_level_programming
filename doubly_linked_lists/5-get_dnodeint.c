#include "lists.h"

/**
 * get_dnodeint_at_index - Function that retruns the nth node of a list
 * @head: head
 * @index: integer
 * Return: 0
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		count++;
		head = head->next;
	}

	return (NULL);
}
