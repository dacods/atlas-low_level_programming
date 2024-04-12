#include "search_algos.h"

/**
 * binary_search - Function that searches for a value using binary search
 * @array: Pointer to the first element of the array to search in
 * @size Number of elements
 * @value: Value to search for
 * Return: Found Value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid;
	int i = 0;

	while (left <= right)
	{
		if (array[mid] == value)
			return (mid);

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		mid = left + (right - left) / 2;
		
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	

	return (-1);
	
}