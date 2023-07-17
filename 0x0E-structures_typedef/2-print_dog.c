#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Printsa struct dog
 * @d: pointer to struct dog
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf(" ");
	else if ((*d).age <= 0 || (*d).owner == (void *)0)
		printf("(nil)\n");
	else if ((*d).name == NULL)
		printf("Name: (nil)\n");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
