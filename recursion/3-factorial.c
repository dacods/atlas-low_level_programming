#include "main.h"

/**
 * factorial - gets the factorial of a given number
 * @n:
 * Return:
 */

int factorial(int n)
{
	if (n <= 1)
	{
		if (n < 0)
		{
			return (-1);
		}
		return (1);
	}
	return (n * factorial(n - 1));
}
