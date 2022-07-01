#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of said table
 * Return: a ptr to new table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/* declarations */
	hash_table_t *table;

	/* if size fail */
	if (!size)
		return (NULL);
	htable = calloc(1, sizeof(hash_table_t));
	/* if calloc fail */
	if (!htable)
		return (NULL);
	htable->size = size;
	htable->array = calloc(size, sizeof(hash_node_t *));
	/* if calloc fail */
	if (!htable->array)
	{
		free(htable);
		return (NULL);
	}
	/* if all is well */
	return (htable);
}
