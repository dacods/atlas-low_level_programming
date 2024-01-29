#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: 0
 */

void rev_string(char *s)
{
	char p = s[0];
	int i = 0;
	int l;

	while (s[i] != '\0')
	{
		i++;
	}

	for (l = 0; l < i; l++)
	{
		i--;
		p = s[l];
		s[l] = s[i];
		s[i] = p;
	}
}
