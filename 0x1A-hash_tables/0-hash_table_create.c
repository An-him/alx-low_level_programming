#include "hash_tables.h"
/**
 *hash_table_create - creates hash tables
 *@size: size of the table to create
 *Return: allocated space for hash_table
 *
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t));

	if (new != NULL)
	{
		new->size = size;
		return (new);
	}
	else
	return (NULL);
}
