#include "hash_tables.h"
/**
 * hash_table_create - function to create a hash table
 * @size: size of the hash table
 * Return: new
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new->array == NULL)
		return (NULL);

	new->size = size;
	return (new);
}
