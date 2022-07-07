#include "hash_tables.h"

/**
 * hash_table_set: adds elements to the hash table
 * @ht: the hash table to be added or updated
 * @key: the key
 * @value: thevalue associated with the key
 * Return: 1 if succeeded else, 0
**/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *future;

	if (strlen(key) == 0 || !ht)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);   /* gets index */

	future = ht->array[index];
	while (future)    /* checks for duplicates */
	{
		if (strcmp(key, future->key) == 0)
		{
			free(future->value);
			future->value = strdup(value);
			return (1);
		}
		future = future->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];  /* add to beginning of node */
	ht->array[index] = new_node;
	return (1);
}
