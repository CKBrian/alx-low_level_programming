#include "lists.h"
/**
 * get_nodeint_at_index - Gets the nth node in a linked list
 * @index: the index of the node, starting at 0
 * @head: pointer to the head node
 * Return: pointer to nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	for (i = 0; i <= index; i++)
		temp = temp->next;
	if (index > (i - 1))
		return (NULL);

	temp = head;
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}
	return (temp);
}
