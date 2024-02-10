#include "main.h"
#include <stddef.h>
/**
 * _strncpy - copies a string
 * @dest: string
 * @src: string
 * @n: integer
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *d = dest;
	char *s = src;

	while (n > 0 && *s != '\0')
	{
		*d++ = *s++;
		n--;
	}

	while (n > 0)
	{
		*d++ = '\0';
		n--;
	}

	return (dest);
}
