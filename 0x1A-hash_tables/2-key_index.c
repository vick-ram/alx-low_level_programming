#include "hash_tables.h"
/**
 *key_index - gives us index of a key
 *@key: - hash table key
 *@size: - size of the hash table
 *Return: - returns the index
 */
unsigned long int key_index(const unsigned char *key,
		unsigned long int size)
{
	return (hash_djb2(key) % size);
}
