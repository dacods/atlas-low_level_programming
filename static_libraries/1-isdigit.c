#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks for a digit
 * @c: integer
 * Return: 1 if c is present 0 if otherwise.
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
