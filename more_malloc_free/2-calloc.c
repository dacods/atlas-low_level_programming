#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmeb: integer
 * @size: integer
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total;
	void *mem;
	char *zero;
	unsigned int i;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	
	total = nmemb * size;

	mem = malloc(total);

	if (mem == NULL)
	{
		return (NULL);
	}

	zero = (char *)mem;

	for (i = 0; i < total; ++i)
	{
		zero[i] = 0;
	}

	return (mem);
}
