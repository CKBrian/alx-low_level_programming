#include "lists.h"
/**
 * add_nodeint - adds a node at the beginning of a linked list
 * @head: pointer to a pointer to the head of a list
 * @n: value to insert to the new node
 * Return: adress of the new node otherwise NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = NULL, *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = temp;
	*head = newnode;
	return (newnode);

}
