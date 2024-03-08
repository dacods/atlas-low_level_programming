#include "lists.h"
#include <stdio.h>

/**
 * print_list - fuction that prints the elements of a list
 * @h: pointer
 * Return: count
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *current = h;

	while (current)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", current->len, current->str);

		current = current->next;
		count++;
	}
	return (count);
}
