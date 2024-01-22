#include "main.h"
/**
 * _islower - replaces c with a 1 if present and 0 if not.
 *
 * Return: if c is lower return 1 and 0 if not.
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
