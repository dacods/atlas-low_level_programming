#include "main.h"
/**
 * is_prime_number - gets 1 if input is prime and 0 if otherwise
 * @n: integer
 * @i: integer
 * Return: 1 if the number is prime, otherwise return 0
 */

int prime(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, 2));
}
/**
 * prime - gets the prime number
 * @n: integer
 * @i: integr
 * Return: the prime value
 */
int prime(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (prime(n, i + 1));
	}
}
