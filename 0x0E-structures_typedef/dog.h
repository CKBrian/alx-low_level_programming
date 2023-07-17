#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure that stores dog age name and owner details
 * @name: Pointer to dog name string
 * @age: Age of dog
 * @owner: Pointer to dog owner string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif /* DOG_H */
