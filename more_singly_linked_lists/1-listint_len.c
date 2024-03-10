#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in a linked list
 * @h: pointer
 * Return: count
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *current = h;

	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);
}
