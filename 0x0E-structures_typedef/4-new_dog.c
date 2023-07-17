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
	dog_t *first_dog;

	first_dog = malloc(sizeof(dog_t));
	if (first_dog == NULL)
		return ((void *) 0);
	first_dog->age = age;
	first_dog->name = name;
	first_dog->owner = owner;
	return (first_dog);
}
