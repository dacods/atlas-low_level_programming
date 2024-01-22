#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: 0.
 */

void print_alphabet_x10(void)
{
int i;
char letters;
for (i = 0; i < 10; ++i)
{
for (letters = 'a'; letters <= 'z'; letters++)
{
_putchar(letters);
}
_putchar('\n');
}
}
