#include "hash_tables.h"
/**
 *key_index - KEY
 *@key: key of the hash table
 *@size: size of the array
 *Return: unsigned long int
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;
	return (index);
}
