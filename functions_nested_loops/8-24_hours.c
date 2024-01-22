#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: the time
 */
void jack_bauer(void)
{
int hours, min;
for (hours = 0; hours < 24; hours++)
{
for (min = 0; min <= 59; min++)
{
_putchar((hours / 10) + '0');
_putchar((hours % 10) + '0');
_putchar(':');
_putchar((min / 10) + '0');
_putchar((min % 10) + '0');
_putchar('\n');
}
}
}
