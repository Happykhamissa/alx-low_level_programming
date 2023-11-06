#include "hash_tables.h"


/**
 * set_pair - mallocs a key/value pair to the hash table.
 * @key: the key, a string that cannot be empty.
 * @value: the value associated with the key, can be an empty string.
 *
 * Return: pointer to the new node.
 */
hash_node_t *set_pair(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (NULL);
	node->key = malloc(strlen(key) + 1);
	if (node->key == NULL)
		return (NULL);
	node->value = malloc(strlen(value) + 1);
	if (node->value == NULL)
		return (NULL);
	strcpy(node->key, key);
	strcpy(node->value, value);
	return (node);
}

/**
 * set_pair_only - (no collision) set key:value pair to first array element
 * @ht: pointer to the hash table.
 * @key: the key, a string that cannot be empty.
 * @value: the value associated with the key, can be an empty string.
 * @index: the key's index.
 *
 * Return: the node, or NULL if failed.
 */
int set_pair_only(hash_table_t *ht, const char *key,
		  const char *value, unsigned long int index)
{
	hash_node_t *node = set_pair(key, value);

	if (node == NULL)
		return (0);
	node->next = NULL;
	ht->array[index] = node;
	return (1);
}

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: a pointer to the hash table array.
 * @key: the key, a string that cannot be empty.
 * @value: the value associated with the key, can be an empty string.
 *
 * Return: 1 on success, 0 on error.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value) {
    if (ht == NULL || key == NULL || strcmp(key, "") == 0)
    {
        return 0;
    }

    size_t index = hash_function(key, ht->size);
    node_t* new_node = (node_t*)malloc(sizeof(node_t));
    if (new_node == NULL)
    {
        return 0;
    }

    new_node->key = strdup(key);
    new_node->value = strdup(value);

    if (new_node->key == NULL || (new_node->value == NULL && strcmp(value, "") != 0)) {
        free(new_node->key);
        free(new_node->value);
        free(new_node);
        return 0;
    }

    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return 1;
}
