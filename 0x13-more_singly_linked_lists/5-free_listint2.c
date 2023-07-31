#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and sets head to NULL.
 * @head: pointer to a pointer to a head of the node
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

}
