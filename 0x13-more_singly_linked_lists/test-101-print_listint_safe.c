#include "lists.h"
/**
 * print_listint_safe -  prints a listint_t linked list.
 * @head: pointer to head node
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head, *fast = head, *slow = head, *temp2 = head;
	size_t nodes = 0, is_loop = 0, loop = 0;

	if (head == NULL)
		return (nodes);
	while (head != NULL)
	{
		if (loop == 0 && fast != NULL && temp2->next != NULL)
		{
			if (is_loop == 1)
			{
				temp2 = fast;
				fast = fast->next;
				slow = slow->next; }
			else
			{
			fast = fast->next->next;
			slow = slow->next; }
			if (fast == slow)
			{
				if (is_loop == 1)
					loop = 1;
				else
				{
					is_loop = 1;
					slow = head; } } }
		else
		{
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
		if (temp->next == temp2)
		{
		printf("[%p] %d\n", (void *)temp, temp->n);
		printf("[%p] %d\n", (void *)(temp->next), (temp->next->n));
		printf("-> [%p] %d\n", (void *)slow, slow->n);
		nodes++;
		break; } } }
	return (nodes); }
