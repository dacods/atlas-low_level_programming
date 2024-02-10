#include "main.h"

/**
 * *_strcpy - copies the string pointed to src
 * @dest: integer
 * @src: integer
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int l = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; l < i ; l++)
	{
		dest[l] = src[l];
	}
	dest[i] = '\0';
	return (dest);
}
