#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to variable of dog struct to store the name age and owner
 * @name: Pointer to dog name string
 * @age: Age of dog
 * @owner: Owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
