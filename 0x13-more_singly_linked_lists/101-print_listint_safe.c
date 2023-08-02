#include "lists.h"
/**
 * print_listint_safe -  prints a listint_t linked list.
 * @head: pointer to head node
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head, *fast = head, *slow = head;
	size_t nodes = 0;

	if (head == NULL)
		exit(98);
	while (temp->next != head)
	{
		if (head->next == NULL)
			break;
		if (fast != NULL)
		{
			slow = slow->next;
			fast = fast->next->next;
		}
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
		nodes++;
		if (temp == NULL)
			return (nodes);
		else if (slow == fast)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			temp = temp->next;
			nodes++;
			break;
		}
	}
	if (temp != temp->next)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
		printf("-> [%p] %d\n", (void *)temp, temp->n);
		nodes++;
	}
	else
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		printf("-> [%p] %d\n", (void *)temp, temp->n);
		nodes++; }
	return (nodes);
}
