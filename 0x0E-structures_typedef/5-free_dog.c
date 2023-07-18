#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Function tht frees dogs
 * @d: pointer to dog struct
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
