#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name even if changed
 * argc:
 * argv: 
 * Return: program name
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n",argv[0]);
	}
	return (0);
}
