#include "lists.h"

/**
 * free_dlistint - Function that frees a list
 * @head: head
 * Return: 0
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	head = NULL;
}
