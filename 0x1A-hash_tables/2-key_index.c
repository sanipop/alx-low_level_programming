#include "hash_tables.h"

/**
 * key_index - the function for getting key index
 * @key: the key for the value
 * @size: the size of the hash table
 *
 * Return: the value of the key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
