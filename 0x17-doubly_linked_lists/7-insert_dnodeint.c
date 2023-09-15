#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at a position in a list
 * @h: pointer to head node
 * @idx: node index starting from 0
 * @n: integer
 * Return: adress of newnode
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *newnode = NULL;
	unsigned int index = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (temp == NULL && idx == 0)
	{
		newnode->next = temp;
		newnode->prev = NULL;
		*h = newnode;
		return (newnode);
	}
	while (temp != NULL)
	{
		if (index == idx)
		{
			newnode->next = temp;
			newnode->prev = temp->prev;
			if (idx == 0)
				*h = newnode;
			else
				temp->prev->next = newnode;
			temp->prev = newnode;
			return (newnode);
		}
		else if (temp->next == NULL && idx == index + 1)
		{
			newnode->next = NULL;
			newnode->prev = temp;
			temp->next = newnode;
			return (newnode);
		}
		temp = temp->next;
		index++;
	}
	free(newnode);
	return (NULL);
}
