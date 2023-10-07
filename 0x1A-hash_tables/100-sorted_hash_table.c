#include "hash_tables.h"
/**
 * shash_table_create - creates a hash table.
 * @size: size of array
 * Return: hash table otherwise NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *new_table;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
/**
 * linked_list_set - adds an element to a sorted linked list
 * @ht: hash table you want to add or update the key/value to
 * @key: hash table key
 * @temp: node in a hash table
 * Return: nothing
 */
void linked_list_set(shash_table_t *ht, shash_node_t *temp, const char *key)
{
	shash_node_t *stemp;

	stemp = ht->shead;
	if (stemp == NULL || strcmp(key, stemp->key) < 0)
	{
		temp->snext = stemp;
		temp->sprev = NULL;
		if (stemp)
			stemp->sprev = temp;
		ht->shead = temp;
		stemp = temp;
		if (stemp->snext == NULL)
			ht->stail = stemp;
		return;
	}
	else
	{
	while (stemp)
	{
		if (strcmp(key, stemp->key) > 0 &&
			(stemp->snext == NULL || strcmp(key, stemp->snext->key) < 0))
		{
			temp->snext = stemp->snext;
			temp->sprev = stemp;
			if (stemp->snext)
				stemp->snext->sprev = temp;
			stemp->snext = temp;
			if (temp->snext == NULL)
				ht->stail = temp;
			break;
		}
		stemp = stemp->snext;
	}
	}
}
/**
 * shash_table_set - adds an element to a hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: hash table key
 * @value: hash table value
 * Return: 1 on success otherwise 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *temp;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	temp = malloc(sizeof(shash_node_t));
	if (!temp)
		return (0);
	temp->key = malloc(sizeof(shash_node_t));
	if (!temp->key)
	{
		free(temp);
		return (0);
	}
	temp->value = malloc(sizeof(shash_node_t));
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

	/*sorted linked list*/
	linked_list_set(ht, temp, key);
	return (1);
}
/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: hash table
 * @key: key to a hash table element
 * Return: value of the key otherwise NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp = NULL;

	if (ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index > ht->size)
		return (NULL);
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
/**
 * shash_table_print - prints a hash table
 * @ht: pointer to hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int flag = 0;
	shash_node_t *stemp;

	if (ht == NULL)
		return;

	stemp = ht->shead;
	printf("{");
	while (stemp)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", stemp->key, stemp->value);
		flag = 1;
		stemp = stemp->snext;
	}
	printf("}\n");
}
/**
 * shash_table_delete - deletes a hash table
 * @ht: pointer to hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *temp = NULL;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		temp = ht->array[i];
		while (temp)
		{
			temp = temp->next;
			free(ht->array[i]->value);
			free(ht->array[i]->key);
			free(ht->array[i]);
			ht->array[i] = temp;

		}
	}
	free(ht->array);
	free(ht);
}
/**
 * shash_table_print_rev - prints a hash table
 * @ht: pointer to hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int flag = 0;
	shash_node_t *stemp;

	if (ht == NULL)
		return;

	stemp = ht->stail;
	printf("{");
	while (stemp)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", stemp->key, stemp->value);
		flag = 1;
		stemp = stemp->sprev;
	}
	printf("}\n");
}
