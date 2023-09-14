#include "lists.h"
/**
 * dlistint_len - returns number of elements in a doubly linked list
 * @h: doubly linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t elem = 0;

	while (temp)
	{
		temp = temp->next;
		elem++;
	}
	return (elem);
}
