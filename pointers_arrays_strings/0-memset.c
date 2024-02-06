#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer
 * @b: constant
 * @n: number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
