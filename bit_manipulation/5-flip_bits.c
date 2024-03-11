#include "main.h"

/**
 * flip_bits - Function that returns the number of bits you would need to flip
 * @n: integer
 * @m: integer
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result != 0)
	{
		xor_result &= (xor_result - 1);
		count++;
	}

	return (count);
}
