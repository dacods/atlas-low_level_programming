#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Function that frees a list
 * @head: pointer
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *temp;
	list_t *current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
	head = NULL;
}
