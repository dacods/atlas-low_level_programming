#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	char *dupe;
	int length = 0;
	char *temp = str;
	int i;

	if (str == 0)
	{
		return (0);
	}

	while (*temp != '\0')
	{
		length++;
		temp++;
	}
	str = str;

	dupe = (char *)malloc((length + 1) * sizeof(char));

	if (dupe == 0)
	{
		return (0);
	}

	for (i = 0; i < length; i++)
	{
		dupe[i] = str[i];
	}

	dupe[length] = '\0';

	return (dupe);
}
