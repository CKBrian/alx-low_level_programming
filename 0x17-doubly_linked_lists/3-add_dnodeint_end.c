#include "lists.h"
/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list
 * @head: pointer to head node
 * @n: integer
 * Return: new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL, *temp = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (temp == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		newnode->prev = temp;
		temp->next = newnode;
	}
	newnode->next = NULL;
	return (newnode);
}
