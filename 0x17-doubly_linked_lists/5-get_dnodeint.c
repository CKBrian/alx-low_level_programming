#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node in a list
 * @head: pointer to head node
 * @index: node index starting from 0
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int idx = 0;

	while (temp != NULL)
	{
		if (index == idx)
			return (temp);
		temp = temp->next;
		idx++;
	}
	return (NULL);
}
