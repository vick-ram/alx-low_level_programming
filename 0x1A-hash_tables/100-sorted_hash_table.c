#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *new_table;
    unsigned long int i;

    new_table = malloc(sizeof(shash_table_t));
    if (new_table == NULL)
        return (NULL);

    new_table->size = size;
    new_table->array = malloc(sizeof(shash_node_t *) * size);
    if (new_table->array == NULL)
    {
        free(new_table);
        return (NULL);
    }

    for (i = 0; i < size; i++)
        new_table->array[i] = NULL;

    new_table->shead = NULL;
    new_table->stail = NULL;

    return (new_table);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: the sorted hash table
 * @key: key to add or update
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *new_node, *current, *prev = NULL;
	unsigned long int index;

	new_node = malloc(sizeof(shash_node_t));
	index = key_index((const unsigned char *)key, ht->size);
	if (new_node == NULL) {
        return (0);
    }
    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = NULL;
	new_node->sprev = NULL;
    new_node->snext = NULL;
	current = ht->array[index];
	while (current != NULL && strcmp(key, current->key) > 0) {
        prev = current;
        current = current->next;
    }
    if (prev == NULL) {
        new_node->next = ht->array[index];
        ht->array[index] = new_node;
    } else {
        prev->next = new_node;
        new_node->next = current;
    }

    if (ht->shead == NULL || strcmp(key, ht->shead->key) < 0) {
        new_node->snext = ht->shead;
        new_node->sprev = NULL;
        if (ht->shead != NULL) {
            ht->shead->sprev = new_node;
        } else {
            ht->stail = new_node;
        }
        ht->shead = new_node;
    } else {
        current = ht->shead;
        while (current->snext != NULL && strcmp(key, current->snext->key) > 0) {
            current = current->snext;
        }
        new_node->snext = current->snext;
        new_node->sprev = current;
        if (current->snext != NULL) {
            current->snext->sprev = new_node;
        } else {
            ht->stail = new_node;
        }
        current->snext = new_node;
    }

    return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: pointer to the hash table
 * @key: key to look for
 *
 * Return: value associated with the element, or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int index;
    shash_node_t *current;

    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);

    current = ht->array[index];
    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
            return (current->value);
        current = current->next;
    }

    return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: pointer to the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;
    printf("{");
    current = ht->shead;
    while (current != NULL)
    {
        printf("'%s': '%s'", current->key, current->value);
        current = current->snext;
        if (current != NULL)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse order
 * @ht: pointer to the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;
	printf("{");
	current = ht->stail;
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: pointer to the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *current, *next;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	}
	free(ht->array);
	current = ht->shead;
	while (current != NULL)
	{
		next = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = next;
	}
	free(ht);
}
