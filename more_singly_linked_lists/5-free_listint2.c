#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Function that frees a list
 * @head: pointer
 * Return: 0
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	while (*head != NULL)
	{
		listint_t *current = *head;
		*head = (*head)->next;
		free(current);
	}
}
