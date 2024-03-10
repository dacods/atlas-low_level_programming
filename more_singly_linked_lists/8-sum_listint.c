#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all the data of a linked list
 * @head: pointer
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
