#include "main.h"

/**
 * _strcat - 
 * @dest:
 * @src:
 * Return:
 */

char *_strcat(char *dest, char *src)
{
	char *newString = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (newString);
}
