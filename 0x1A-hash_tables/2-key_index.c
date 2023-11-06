#include "hash_tables.h"

/**
 * hash_djb2 - Hash function, takes a string and turns it into a hash number
 * @str: the string, a constant value unrepeated in the hash table
 *
 * Return: The hash number
 */

unsigned long hash_djb2(const unsigned char *str) {
    unsigned long hash = 5381;
    int c;

    while ((c = *str++)) {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }

    return hash;
}

/**
 * key_index - gives the index of a key.
 * @key: the key, a string.
 * @size: the size of the array of the hash table.
 *
 * Return: Index number for the key/value pair in the hash table array.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long hash = hash_djb2(key);
    return hash % size;
}
