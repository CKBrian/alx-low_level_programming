#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp->next != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
	free(head);
}
