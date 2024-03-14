#include "list.h"

/**
 * print_dlistint - Function that prints all the elements of a list
 * @h: head
 * Return:
*/

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
    size_t *current = h;

    while (current != h)
    {
        if (current == NULL)
            return (0);

        count++;
    }
    return (count);
}