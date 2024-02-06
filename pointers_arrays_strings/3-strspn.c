#include "main.h"

/**
 * _strspn -
 * @s:
 * @accept:
 * Return:
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;
	int i;
	char *a;
	while (*s)
	{
		i = 0;
		*a = accept;
		while (*a)
		{
			if (*s == *a)
			{
				counter++;
				i = 1;
				break;
			}
		}
		a++;
		if (!i)
		{
			break;
		}
	}
	s++;
	return (counter);
}
