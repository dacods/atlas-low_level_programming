#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the alphabet in reverse.
 *
 * Return: Always 0.
 */
int  main(void)
{
char letters;

for (letters = 'z'; letters >= 'a'; letters--)
{
putchar(letters);
}
putchar('\n');
return (0);
}
