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
	listint_t *temp = NULL, *newnode = NULL;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);
	temp = *head;
	for (i = 0; temp->next != NULL; i++)
		temp = temp->next;
	if (idx > i)
		return (NULL);
	temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		for (i = 1; i < idx; i++)
			temp = temp->next;
		newnode->next = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
