#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns
 * the head node’s data (n)
 *
 * @head: double pointer to head node
 * Return: head node's data otherwise 0
 */
int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *temp = *head;

	if (temp == NULL)
		return (0);
	value = temp->n;
	temp = temp->next;
	free(*head);
	*head = temp;
	return (value);
}
