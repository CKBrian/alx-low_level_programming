#include "lists.h"
/**
 * print_list - prints all elements in a list_t list
 * @h: Pointer to struct list_s
 * Return: Number of nodes otherwise NULL
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
			temp = temp->next;
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
			temp = temp->next;
		}
		i++;
	}
	return (i);
}
