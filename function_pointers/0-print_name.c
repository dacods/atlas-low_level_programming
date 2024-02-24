#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: a name
 * @f: function pointer
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
