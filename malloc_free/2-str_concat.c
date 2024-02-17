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
	size_t length1 = 0;
	size_t length2 = 0;
	char *joined, *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}

	result = malloc((length1 + length2 + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	joined = result;

	while (*s1 != '\0')
	{
		*joined++ = *s1++;
	}
	while (*s2 != '\0')
	{
		*joined++ = *s2++;
	}
	*joined = '\0';
	return (result);
}
