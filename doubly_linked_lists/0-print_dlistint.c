#include "lists.h"

/**
 * print_dlistint - Function that prints all the elements of a list
 * @h: head
 * Return: count
 */

size_t print_dlistint(const dlistint_t *h)
{
    int count = 0;

    while (h)
    {
        if (h == NULL)
            return (0);
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }
    return (count);
}