#include "hash_tables.h"
/**
 * key_index - returns the index of a key.
 * @key: hash table key
 * @size: size of hash table array
 * Return: index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
