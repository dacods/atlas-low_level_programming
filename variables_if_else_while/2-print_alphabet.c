#include <stdio.h>
#include <ctype.h>
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
char letters;

for (letters = 'a'; letters <= 'z'; letters++)
{
	putchar(letters);
}
putchar('\n');
return(0);
}
