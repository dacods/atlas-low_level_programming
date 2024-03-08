#include "lists.h"
#include "stdio.h"

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
