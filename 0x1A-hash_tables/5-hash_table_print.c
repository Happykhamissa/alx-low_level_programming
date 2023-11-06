#include "hash_tables.h"

/**
 * hash_table_print - prints key/value pairs in hash table array order.
 * @ht: the hash table.
 */

void hash_table_print(const hash_table_t *ht) {
    if (ht == NULL) {
        return; // If the hash table is not initialized, exit the function
    }

    for (size_t i = 0; i < ht->size; i++) {
        node_t* current = ht->array[i];

        // Print elements in the order of array and list
        while (current != NULL) {
            printf("array[%zu]: ", i);
            while (current != NULL) {
                printf("(%s, %d) ", current->key, current->value);
                current = current->next;
            }
            printf("\n");
        }
    }
}
