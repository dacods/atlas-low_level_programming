#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the elements of an array of integers 
 * @a: integer
 * @n: integer
 * Return: 0
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < (n - 1); c++)
	{
		printf("%d, ", a[c]);
	}
	if (c == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
