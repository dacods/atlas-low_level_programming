#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: integer
 * @n: integer
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int *beginning = a;
	int *ending = a + n - 1;
	int temp;

	while (beginning < ending)
	{
		temp = *beginning;
		*beginning = *ending;
		*ending = temp;
		beginning++;
		ending--;
	}
}
