#include "search_algos.h"

/**
 * linear_search - Function that searches for a value using linear seach
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements
 * @value: Value to search for
 * Return:
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
