#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	int length1 = 0;
	int length2 = 0;
	char *temp = s1;
	char *temp2 = s2;
	char *joined;

	if (s1 == 0)
	{
		s1 = "";
	}

	if (s2 == 0)
	{
		s2 = "";
	}

	while (*temp != '\0')
	{
		length1++;
		temp++;
	}

	while (*temp2 != '\0')
	{
		length2++;
		temp2++;
	}

	joined = (char *)malloc((length1 + length2 + 1) * sizeof(char));

	if (joined == 0)
	{
		return (0);
	}

	temp = s1;

	while (*temp != '\0')
	{
		*joined = *temp;
		temp++;
		joined++;
	}

	temp2 = s2;

	while (*temp2 != '\0')
	{
		*joined = *temp2;
		temp2++;
		joined++;
	}

	*joined = '\0';

	return (joined - (length1 + length2));
}			
