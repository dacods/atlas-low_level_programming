#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Function that prints all the elements of a list
 * @h: pointer
 * Return: count
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%u\n", current->n);

		current = current->next;
		count++;
	}
	return (count);
}
