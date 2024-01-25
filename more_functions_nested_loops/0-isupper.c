#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * @c: char integer
 * Return: 1 if upper and 0 if otherewise.
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
{
	return (1);
}
else
{
	return (0);
}
}
