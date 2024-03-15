#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new node to the end of a list
 * @head: head
 * @n: integer
 * Return: new_node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last_node = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = *head;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}
	return (new_node);
}
