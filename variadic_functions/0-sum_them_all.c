#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sum of all parameters
 * @n: number
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	int sum = 0;
	unsigned int i;

	va_start(numbers, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}

	va_end(numbers);

	return (sum);
}
