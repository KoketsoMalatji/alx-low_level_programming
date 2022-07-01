#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - create a hash table
 * @size: size of the array
 * Return: pointerto the created table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;

	if (size < 1)
		return (NULL);

	hashtablet = malloc(sizeof(hash_table_t));

	if (hashtable == NULL)
		return (NULL);

	hashtable->size = size;
	hashtable->array = calloc(size, sizeof(hash_node_t *));

	if (hashtable->array == NULL)
	{
		free(hashtable);
		return (NULL);
	}

	return (hashtable);
}
