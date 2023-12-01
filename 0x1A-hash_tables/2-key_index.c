#include "hash_tables.h"

/**
 * key_index - the function to find key index.
 * @key: a string of the key.
 * @size: the size of the array.
 *
 * Return: the corresponfng indec value.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
