#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of all data in a list
 * @head: head
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
