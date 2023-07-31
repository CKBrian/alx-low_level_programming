#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: pointer to head node
 * @idx: index of the list where the new node should be added
 * @n: value of the new node
 * Return: adress of new node otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *newnode = NULL;
	unsigned int i;

	for (i = 1; i < idx; i++)
		temp = temp->next;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
