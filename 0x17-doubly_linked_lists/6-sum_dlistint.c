#include "lists.h"
/**
 * sum_dlistint - returns sum of all data in the list
 * @head: pointer to head node
 * Return: sum otherwise 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
