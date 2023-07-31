#include "lists.h"
/**
 * listint_len - returns number of elements in linked list listint_t
 * @h: pointer to linked list
 * Return: number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
