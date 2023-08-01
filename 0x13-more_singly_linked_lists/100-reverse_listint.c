#include "lists.h"
/**
 * reverse_listint - reverses a listint_t list
 * @head: pointer to the head node
 * Return: pointer to reversed list head node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptemp = NULL, *ntemp = *head;

	if (*head == NULL)
		return (NULL);
	while (ntemp->next != NULL)
	{
		ntemp = ntemp->next;
		(*head)->next = ptemp;
		ptemp = *head;
		*head = ntemp;
	}
	(*head)->next = ptemp;

	return (*head);
}
