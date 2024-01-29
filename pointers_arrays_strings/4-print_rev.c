#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0;
	int l;
	int c;

	for (l = 0; s[l] != '\0'; l++)
	{
		i++;
	}

	for (c = (i - 1); c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
