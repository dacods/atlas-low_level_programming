#include "lists.h"

/**
 * print_dlistint - Function that prints all the elements of a list
 * @h: head
 * Return: count
 */

size_t print_dlistint(const dlistint_t *h)
{
    int count = 0;
    const dlistint_t *current = h;

    while (current != NULL)
    {
        if (current == NULL)
            return (0);
        current = current->next;
        count++;
    }
    return (count);
}