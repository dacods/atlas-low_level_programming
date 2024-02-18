#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: integer
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t length1 = 0, length2 = 0;
	char *result;
	unsigned int i = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	if (n >= length2)
	{
		n = length2;
	}
	result = malloc((length1 + n + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (l < n)
	{
		result[i] = s2[l];
		i++;
		l++;
	}
	result[i] = '\0';
	return (result);
}
