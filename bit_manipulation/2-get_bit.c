#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index
 * @n: integer
 * @index: integer
 * Return:
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return (n >> index) & 1;
}
