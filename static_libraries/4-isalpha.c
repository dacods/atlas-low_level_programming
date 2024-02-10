#include "main.h"
/**
 * _isalpha - Prints 1 if c is a letter, lower or upper and 0 if otherwise.
 * @c: This is a letter input.
 * Return: 1 if c is letter, lower, or upper and 0 if otherwise.
 */
int _isalpha(int c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	return (1);
else
	return (0);
}
