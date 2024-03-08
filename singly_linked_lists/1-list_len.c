#include "lists.h"
#include "stdio.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer
 * Return: count
 */

size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *current = h;

	while (current)
	{
		if (current == NULL)
			return (0);

		current = current->next;
		count++;
	}

	return (count);
}
