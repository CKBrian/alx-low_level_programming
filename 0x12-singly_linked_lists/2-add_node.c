#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of list_t
 * @head: Pointer to the first node
 * @str: string to be added to node
 * Return: address of the new element otherwise NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = NULL;
	unsigned int i = 0;

	for (i = 0; (str != NULL && str[i] != '\0'); i++)
	{}
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	if (str == NULL)
		temp->str = NULL;
	else
		temp->str = strdup(str);
	temp->len = i;
	temp->next = *head;
	*head = temp;
	return (temp);

}
