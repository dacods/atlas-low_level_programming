#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints all numbers
 * @separator: a separator
 * @n: number of agruments
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(numbers, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(numbers);

	putchar('\n');
}
