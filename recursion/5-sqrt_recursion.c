#include "main.h"

/**
 * _sqrt - gets root
 * @x: number
 * @y: number
 * Return: the square root
 */

int _sqrt(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (_sqrt(x, y + 1));
}
/**
 * _sqrt_recursion - gets the natural square root of a number
 * @n: number
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
