#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * @width: integer
 * @height: integer
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int **w;
	int i, l;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}

	w = malloc(width * sizeof(int));
	if (w == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		w[i] = malloc(width * sizeof(int));
		if (w[i] == NULL)
		{
			for (l = 0; l < i; l++)
			{
				free(w[l]);
			}
			free(w);
			return (NULL);
		}
		for (l = 0; l < width; l++)
		{
			w[i][l] = 0;
		}
	}
	return (w);
}
