#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: The Result
 */

int _atoi(char *s)
{
	int i = 0;
	int l = 0;
	int res = 0;
	int len = 0;
	int c = 0;
	int digit = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len && c == 0)
	{
		if (s[i] == '-')
		++l;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (l % 2)
			{
				digit = -digit;
			}
			res = res * 10 + digit;
			c = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			c = 0;
		}
		i++;
	}
	if (c == 0)
	return (0);
	return (res);
}
