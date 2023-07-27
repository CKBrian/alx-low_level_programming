#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: linked list
 * Return: number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	unsigned long i;

	for (i = 0; temp != NULL; i++)
	{
		temp = temp->next;
	}
	return (i);
}
