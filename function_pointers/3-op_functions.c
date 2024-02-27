#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - adds two integers
 * @a: integer
 * @b: integer
 * Return: sum
 */

int op_add(int a, int b)
{
	int sum;

	sum = a + b;

	return (sum);
}

/**
 * op_sub - subtracts two integers
 * @a: integer
 * @b: integer
 * Return: difference
 */

int op_sub(int a, int b)
{
	int difference;

	difference = a - b;

	return (difference);
}

/**
 * op_mul - shows the product of two integers
 * @a: integer
 * @b: integer
 * Return: prod
 */

int op_mul(int a, int b)
{
	int prod;

	prod = a * b;

	return (prod);
}

/**
 * op_div - divides two integers
 * @a: integer
 * @b: integer
 * Return: div
 */

int op_div(int a, int b)
{
	int div;

	div = a / b;

	return (div);
}

/**
 * op_mod - gets the remainder of the division of two integers
 * @a: integer
 * @b: integer
 * Return: modu
 */

int op_mod(int a, int b)
{
	int modu;

	modu = a % b;

	return (modu);
}
