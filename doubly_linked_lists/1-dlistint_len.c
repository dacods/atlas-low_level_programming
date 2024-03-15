#include "lists.h"

/**
 * dlistint_len - Function that returns the number of elements in a linked list
 * @h: head
 * Return:
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
