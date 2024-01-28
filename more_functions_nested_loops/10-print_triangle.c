#include "main.h"
/**
 * print_triangle - prints a trianle
 * @size: size of the triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int i, c;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for ((c = size - i); c > 0; c--)
			{
				_putchar(' ');
			}

			for (c = 0; c < i; c++)
			{
				_putchar('#');
			}

			if (i == size)
			{
				continue;
			}

			_putchar('\n');
		}
	}
	_putchar('\n');
}
