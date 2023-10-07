#include "hash_tables.h"
/**
 * hash_table_set - adds an element to a hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: hash table key
 * @value: hash table value
 * Return: 1 on success otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	temp = malloc(sizeof(hash_node_t));
	if (!temp)
		return (0);
	temp->key = malloc(sizeof(hash_node_t));
	if (!temp->key)
	{
		free(temp);
		return (0);
	}
	temp->value = malloc(sizeof(hash_node_t));
	if (!temp->value)
	{
		free(temp->key);
		free(temp);
		return (0);
	}

	strcpy(temp->key, key);
	strcpy(temp->value, value);

	temp->next = NULL;
	if (ht->array[index] && strcmp(key, ht->array[index]->key) == 0)
		free(ht->array[index]);
	else
		temp->next = ht->array[index];

	ht->array[index] = temp;
	return (1);
}
