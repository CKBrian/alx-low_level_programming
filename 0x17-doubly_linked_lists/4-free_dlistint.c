#include "lists.h"
/**
 * free_dlistint - frees a d_listint_t list
 * @head: pointer to head node
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
