#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: 0
 */
void puts_half(char *str)
{
	int i;
	int l;
	int c = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		c++;
	}
	l = (c / 2);
	if ((c % 2) == 1)
	{
		l = ((c + 1) / 2);
	}
	for (i = l; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
