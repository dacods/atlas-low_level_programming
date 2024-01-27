#include "main.h"
/**
 * print_numbers - prints 1 - 9
 *
 * Return:  1 - 9
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
