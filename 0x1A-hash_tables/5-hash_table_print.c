#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag = 0;
	char *value = NULL;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		value = hash_table_get(ht, ht->array[i]->key);
		if (flag == 0)
		{
			printf("'%s': '%s'", ht->array[i]->key, value);
			flag = 1;
		}
		else
		{
			printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, value);
		}
	}
	printf("}\n");
}
