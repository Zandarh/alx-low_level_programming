#include "hash_tables.h"

/**
 * hash_table_create - creates a hastable
 *
 * @size: Size of the hash table
 * Return: pointer to the newly create hash table
 * or NULL if something happens
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;
	unsigned long int i;
	/*Malloc space for one hastable*/
	htable = malloc(sizeof(hash_table_t) * 1);
	if (!htable)
		return (NULL);

	 /*initializing the size of the hastable*/
	htable->size = size;

	/*malloc for size of the array*/
	htable->array = malloc(sizeof(hash_table_t) * htable->size);
	if (!htable->array)
		return (NULL);

	/*set all the malloced spots in array to Null*/
	for (i = 0; i < htable->size; i++)
		htable->array[i] = NULL;

	return (htable);
}
