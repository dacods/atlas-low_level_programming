#include "main.h"
/**
 * _strlen - return length of string
 * @s: string
 * Return: sum
 */
int _strlen(char *s)
{
	int i = 1;
	int sum = 0;
	char p = s[0];

	while (p != '\0')
	{
		sum++;
		p = s[i++];
	}
	return (sum);
}
