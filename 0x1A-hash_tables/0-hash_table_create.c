#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: the size, in number of nodes, to make the new hash table.
 *
 * Return: a pointer to the newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    if (size <= 0) {
        return NULL; // Invalid size
    }

    hash_table_t *ht = (hash_table_t *)malloc(sizeof(hash_table_t));
    if (ht == NULL) {
        return NULL; // Memory allocation failed for the hash table
    }

    ht->size = size;
    ht->array = (node_t **)calloc(size, sizeof(node_t *));
    if (ht->array == NULL) {
        free(ht);
        return NULL; // Memory allocation failed for the array
    }

    return ht; // Successfully created hash table
}
