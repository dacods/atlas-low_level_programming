#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Function that adds a new node at the beginning of a list
 * @head: pointer
 * @str: string
 * Return: new_node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int count = 0;
	const char *ptr = str;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	while (*ptr != '\0')
	{
		count++;
		ptr++;
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = count;
	new_node->next = *head;
	*head = new_node;

	return (new_node);

}
