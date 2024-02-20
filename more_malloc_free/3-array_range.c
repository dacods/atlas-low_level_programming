#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: 0
 */

int *array_range(int min, int max)
{
	int *i, l;

	if (min > max)
	{
		return (NULL);
	}

	i = (int *)malloc((max - min + 1) * sizeof(int));

	if (i == NULL)
	{
		return (NULL);
	}

	for (l = 0; l <= max - min; l++)
	{
		i[l] = min + l;
	}

	return (i);
}
