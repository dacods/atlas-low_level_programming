#include <stdio.h>
#include "main.h"
/**
 * main - prints fizz buzz or fizzbuzz where needed
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
		printf("%d ", i);
		}
	}
	putchar('\n');
	return (0);
}
