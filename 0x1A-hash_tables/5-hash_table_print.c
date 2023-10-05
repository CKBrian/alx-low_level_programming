#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag = 0;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		if (flag == 0)
		{
		printf("'%s': '%s', ", ht->array[i]->key, ht->array[i]->value);
		}
		printf(" '%s': '%s',", ht->array[i]->key, ht->array[i]->value);
	}
	printf("}\n");
}
