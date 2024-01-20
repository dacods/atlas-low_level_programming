#include <stdio.h>
#include <ctype.h>
/**
 * main - prints all single digits 0f base 10.
 *
 * Return: Always 0.
 */
int main(void)
{
int numbers;

for (numbers = 0; numbers <= 9; numbers++)
{
putchar(numbers + '0');
}
putchar('\n');
return (0);
}
