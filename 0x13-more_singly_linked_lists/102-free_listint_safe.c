#include "lists.h"
/**
 * free_listint_safe - frees a linked list with a loop.
 * @h: pointer to the list
 * Return: Number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp = NULL, *fast = NULL, *slow = NULL, *temp2 = NULL;
	size_t nodes = 0, is_loop = 0, loop = 0;

	if (h == NULL)
		return (nodes);
	fast = *h;
	slow = *h;
	temp2 = *h;
	while (*h != NULL)
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
			if (fast->next == NULL || fast->next->next == NULL)
				loop = 1;
			slow = slow->next; }
			if (fast == slow)
			{
				if (is_loop == 1)
					temp2->next = NULL;
				else
				{
					is_loop = 1;
					slow = *h; } }
		}
		else
		{
			temp = (*h)->next;
			free(*h);
			nodes++;
			*h = temp;
		} }
	return (nodes); }
