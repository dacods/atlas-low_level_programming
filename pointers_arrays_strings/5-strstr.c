#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *haystack_ptr;
	char *haystack_temp;
	char *needle_temp;

	if(*needle == '\0')
	{
		return haystack;
	}
	haystack_ptr = haystack;

	while (*haystack_ptr)
	{
		haystack_temp = haystack_ptr;
		needle_temp = needle;

		while (*haystack_temp && *needle_temp && *haystack_temp == *needle_temp)
		{
			haystack_temp++;
			needle_temp++;
		}

		if (*needle_temp == '\0')
		{
			return (haystack_ptr);
		}
		haystack_ptr++;
	}
	return (0);
}
