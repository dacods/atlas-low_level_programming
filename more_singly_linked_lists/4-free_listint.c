#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Function that frees a list
 * @head: pointer
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *temp;
	listint_t *current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	head = NULL;
}
