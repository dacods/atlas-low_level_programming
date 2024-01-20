#include <stdio.h>
#include <ctype.h>
/**
 * main - Prints all combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
int numbers = '0';

while (numbers <= '9')
{
putchar(numbers);
if (numbers != '9')
{
putchar(',');
putchar(' ');
}
++numbers;
}
putchar('\n');
return (0);
}
