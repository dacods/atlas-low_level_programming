#include "lists.h"
#include <stdio.h>

list_t *add_node(list_t **head, const char *str)
{
	struct Node* new_node = (struct Node*)maloc(sizeof(struct Node));

	new_node->
