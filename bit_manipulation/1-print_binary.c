#include "main.h"

/**
 * print_binary - Function that prints the binary representation of a number
 * @n: integer
 * Return:
 */

void print_binary(unsigned long int n)
{
	int started = 0;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = sizeof(unsigned int) * 8 - 1; i >= 0; i--)
	{
		if (n & (1UL << i))
		{
			_putchar('1');
			started = 1;
		}
		else if (started)
		{
			_putchar('0');
		}
	}
}
