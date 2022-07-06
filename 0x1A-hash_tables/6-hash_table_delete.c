#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	/* declarations */
	hash_node_t *new_node, *freeable;
	unsigned long int iterate;

	/* check to see if there is a table */
	if (!ht)
		return;
	/* iterate through and free it all, baby */
	for (iterate = 0; iterate < ht->size; iterate++)
	{
		new = ht->array[iterate];
		while (new_node)
		{
			/* free contents without losing our new_node */
			freeable = new_node;
			new_node = new_node->next;
			free(freeable->key);
			free(freeable->value);
			free(freeable);
			/* start over unless !new_node */
		}
	}
	/* now free the table */
	free(ht->array);
	free(ht);
}
