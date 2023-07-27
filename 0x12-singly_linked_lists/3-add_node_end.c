#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of list_t
 * @head: Pointer to the first node
 * @str: string to be duplicated
 * Return: address of the new element otherwise NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp = *head;
	unsigned int i = 0;

	for (i = 0; (str != NULL && str[i] != '\0'); i++)
	{}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (str == NULL)
	{
		new_node->str = NULL;
	}
	else
		new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	}
	return (new_node);

}
