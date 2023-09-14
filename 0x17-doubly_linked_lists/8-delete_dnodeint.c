#include "lists.h"
/**
 * delete_dnodeint_at_index - returns the nth node in a list
 * @head: pointer to head node
 * @index: node index starting from 0
 * Return: 1 on success otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int idx = 0;

	while (temp != NULL)
	{
		if (index == idx)
		{
			if (index == 0 && temp->next == NULL)
			{
				free(temp);
				*head = NULL;
				return (1);
			}
			temp->next->prev = temp->prev;
			if (index != 0)
				temp->prev->next = temp->next;
			else
				*head = temp->next;
			free(temp);
			return (1);
		}

		temp = temp->next;
		idx++;
	}
	return (-1);
}
