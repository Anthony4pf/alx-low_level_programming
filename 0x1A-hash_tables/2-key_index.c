#include "hash_tables.h"

/**
*key_index - returns the index of a key
*@key: key
*@size: size of the hashtable
*Returns: index at which the key should be stored in the array of the hash table
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	index = hash_djb2(key) % size;

	return (index);
}
