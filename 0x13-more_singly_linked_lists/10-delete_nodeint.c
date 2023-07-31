#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list.
 * @head: pointer to  a pointer to a head node
 * @index: node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *temp2 = NULL;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp2 = temp->next;
		*head = temp2;
	}
	else
	{
		for (i = 0; temp->next != NULL; i++)
			temp = temp->next;
		if (index > i)
			return (-1);

		temp = *head;
		for (i = 1; i < index; i++)
			temp = temp->next;
		temp2 = temp;
		temp = temp->next;
		temp2->next = temp->next;
	}
	free(temp);
	return (1);
}
