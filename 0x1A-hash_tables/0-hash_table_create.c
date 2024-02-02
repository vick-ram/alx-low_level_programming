#include "hash_tables.h"
/**
 *hash_table_create - creates a new key-value pair
 *@size: - size
 *Return: - returns pointer to newly created pair
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int i;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->array = malloc(sizeof(hash_table_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;
	return (new_table);
}
