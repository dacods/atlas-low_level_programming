#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the square
 * Return: 0
 */
void print_square(int size)
{
	int i, c;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

