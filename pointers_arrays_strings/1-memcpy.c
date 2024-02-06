#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *res = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	
	return (res);
}
