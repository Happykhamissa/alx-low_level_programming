#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: a pointer to the hash table array.
 * @key: the key, a string that cannot be empty.
 *
 * Return: the value associated with the key, or NULL if key can't be found.
 */

int hash_table_get(const hash_table_t *ht, const char *key) {
    if (ht == NULL || key == NULL) {
        return -1; // Invalid hash table or key
    }

    size_t index = hash_function(key) % ht->size;
    node_t* current = ht->array[index];

    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            return current->value; // Key found, return its associated value
        }
        current = current->next;
    }
    return -1; // Key not found
}
