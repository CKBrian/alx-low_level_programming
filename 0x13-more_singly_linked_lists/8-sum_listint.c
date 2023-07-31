#include "lists.h"
/**
 * sum_listint - Returns the sum of all data in linked list
 * @head: pointer to head node
 * Return: sum of values of list elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (sum);
	while (temp->next != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;
	return (sum);
}
