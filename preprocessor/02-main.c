#include <stdio.h>

/**
 * main - prints the file name it was compiled from
 * @argc: name
 * @argv: array
 * Return: file name
 */

int main()
{
	printf("%s\n", __FILE__);
	return (0);
}
