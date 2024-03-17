#include "hash_tables.h"

/**
 * key_index - Function that gives you the index of a key
 * @key: key
 * @size: size of the array
 * Return: value % size
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value = hash_djb2(key);

	return (value % size);
}
