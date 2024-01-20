#include <stdio.h>
#include <ctype.h>
/**
 * main - Prints all numbers in base 16 in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
char letters;
int numbers;

for (numbers = '0'; numbers <= '9'; numbers++)
{
putchar(numbers);
}
for (letters = 'a'; letters <= 'f'; letters++)
{
putchar(letters);
}
putchar('\n');
return (0);
}

