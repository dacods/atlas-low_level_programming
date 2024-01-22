#include "main.h"
/**
 * print_alphabet - Print alphabet in lowercase.
 *
 * Return:  0.
 */

void print_alphabet(void)
{
int letters;

for (letters = 'a'; letters <= 'z'; letters++)
{
_putchar(letters);
}
_putchar('\n');
}
