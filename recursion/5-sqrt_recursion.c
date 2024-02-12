#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		i = 1;
		while (i * i <= n)
		{
			i++;
		}
		i--;
		return (i);
	}
}
