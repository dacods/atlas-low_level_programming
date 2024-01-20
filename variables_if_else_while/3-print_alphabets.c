#include <stdio.h>
#include <ctype.h>
/**
 * main - Print the aplhabet in upper and lower case.
 *
 * Return: Always 0.
 */

int main(void)
{
char lower;
char upper;

for (lower = 'a'; lower <= 'z'; lower++)
	{
	putchar(lower);
	}
for (upper = 'A'; upper <= 'Z'; upper++)
	{
	putchar(upper);
	}
putchar('\n');
return (0);
}	
