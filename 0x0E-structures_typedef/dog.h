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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
