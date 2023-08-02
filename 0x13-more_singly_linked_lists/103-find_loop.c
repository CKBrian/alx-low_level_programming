#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the list
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = NULL, *slow = NULL;

	if (head == NULL)
		return (NULL);
	fast = head;
	slow = head;
	while (head != NULL)
	{
		fast = fast->next->next;
		if (fast->next == NULL || fast->next->next == NULL)
			return (NULL);
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (head != NULL)
			{
				fast = fast->next;
				slow = slow->next;
				if (fast == slow)
					return (fast);
			}
		}
	}
	return (NULL);
}
