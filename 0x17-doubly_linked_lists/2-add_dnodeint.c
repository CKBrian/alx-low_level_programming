#include "lists.h"
/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list
 * @head: pointer to head node
 * @n: integer
 * Return: new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	newnode->n = n;
	newnode->prev = NULL;
	if (*head == NULL)
		newnode->next = NULL;
	else
		newnode->next = *head;

	*head = newnode;
	return (newnode);
}
