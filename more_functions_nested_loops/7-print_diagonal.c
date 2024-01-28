#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number of times to print
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, c;

	if (n < 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (c = 0; c < i; c++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
