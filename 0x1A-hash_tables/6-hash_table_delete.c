#include "hash_tables.h"

/**
 * hash_table_delete - fct deletes a hash table.
 * @ht: the hash table.
 */

void hash_table_delete(hash_table_t *ht) {
    if (ht == NULL) {
        return; // Exit if the hash table is not initialized
    }

    for (size_t i = 0; i < ht->size; i++) {
        node_t* current = ht->array[i];
        while (current != NULL) {
            node_t* temp = current;
            current = current->next;
            free(temp->key);
            free(temp);
        }
        ht->array[i] = NULL;
    }

    free(ht->array);
    free(ht);
}
