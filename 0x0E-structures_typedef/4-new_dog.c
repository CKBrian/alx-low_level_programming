#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Creates a new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Dog owner
 * Return: Pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int o, n, own, nam;
	dog_t *first_dog;

	if (name == NULL && owner == NULL && age <= 0)
		return (NULL);
	for (n = 0; name[n] != '\0'; n++)
	{}
	nam = n + 1;
	for (o = 0; owner[o] != '\0'; o++)
	{}
	own = o + 1;
	first_dog = malloc(sizeof(dog_t));
	if (first_dog == NULL)
	{
		free(first_dog);
		return ((void *) 0);
	}
	first_dog->age = age;
	first_dog->name = malloc(sizeof(char) * nam);
	if (first_dog->name == NULL)
	{
		free(first_dog->name);
		return (NULL);
	}
	for (n = 0; n < nam; n++)
		first_dog->name[n] = name[n];
	first_dog->owner = malloc(sizeof(char) * own);
	if (first_dog->owner == NULL)
	{
		free(first_dog->owner);
		return (NULL);
	}
	for (o = 0; o < own; o++)
		first_dog->owner[o] = owner[o];
	return (first_dog);
}
