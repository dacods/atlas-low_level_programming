#include "main.h"

/**
 * string_toupper -
 * 
 * Return:
 */

char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
		}
		str++;
	}

	return (str);
}
