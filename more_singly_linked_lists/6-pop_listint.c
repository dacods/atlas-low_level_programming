#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Function that deletes the head node of a linked list
 * @head: pointer
 * Return: node_data
 */

int pop_listint(listint_t **head)
{
	int node_data;
	listint_t *temp = *head;

	if (*head == NULL)
		return (0);

	node_data = temp->n;
	*head = temp->next;
	free(temp);

	return (node_data);
}
