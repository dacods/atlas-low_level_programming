#include "main.h"
/**
 * more_numbers - prints 0 to 14 10 times
 *
 * Return: 0
 */
void more_numbers(void)
{
	int num, i;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{

if (num >= 10)
_putchar('0' + num / 10);
_putchar('0' + num % 10);
		}
		_putchar('\n');
	}
}
