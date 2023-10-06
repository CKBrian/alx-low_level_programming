#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table
 * @key: key to a hash table element
 * Return: value of the key otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	if (temp == NULL)
		return (NULL);
	if (strcmp(temp->key, key) == 0)
		return (temp->value);
	while (temp)
	{
		temp = temp->next;
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
	}
	return (NULL);
}
