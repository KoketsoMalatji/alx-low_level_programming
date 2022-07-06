#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	/* declarations */
	hash_node_t *loc, *freeable;
	unsigned long int iterate;

	/* check to see if there is a table */
	if (!ht)
		return;
	/* iterate through and free it all, baby */
	for (iterate = 0; iterate < ht->size; iterate++)
	{
		loc = ht->array[iterate];
		while (loc)
		{
			/* free contents without losing our loc */
			freeable = loc;
			loc = loc->next;
			free(freeable->key);
			free(freeable->value);
			free(freeable);
			/* start over unless !loc */
		}
	}
	/* now free the table */
	free(ht->array);
	free(ht);
}
