#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: arguments
 * @argv: array of arguments
 * Return: the multiplied numbers
 */

int main(int argc, char *argv[])
{
	int num;
	int num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num * num2;

	printf("%d\n", result);

	return (0);
}
