#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag = 0;
	char *value = NULL;
	hash_node_t *temp;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			value = hash_table_get(ht, temp->key);
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, value);
			flag = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
