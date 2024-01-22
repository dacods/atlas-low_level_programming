#include "main.h"
/**
 * times_table - prints the times table starting at 0 and stopping at 9.
 * Description: prints the times table.
 * Return: void
 */
void times_table(void)
{
int row, col, out;

for (row = 0; row <= 9; row++)
{
for (col = 0; col <= 9; col++)
{
out = (row * col);
if (col != 0)
{
_putchar(',');
_putchar(' ');
}
if (out >= 10)
{
_putchar((out / 10) + '0');
_putchar((out % 10) + '0');
}
else if (out < 10 && col != 0)
{
_putchar(' ');
_putchar((out % 10) + '0');
}
else
_putchar((out % 10) + '0');
}
_putchar('\n');
}
}
