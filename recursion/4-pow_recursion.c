#include "main.h"

/**
 * _pow_recursion - returns the power of another number
 * @x: number
 * @y: power number
 * Return: value of x
 */

int _pow_recursion(int x, int y)
{
	if (y <= 0)
	{
		if (y < 0)
		{
			return (-1);
		}
		return (1);
	}

	if (x == 0)
	{
		return (0);
	}

	return (x * _pow_recursion(x, y - 1));
}
