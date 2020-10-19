#ifndef DOG
#define DOG

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * struct dog - data about dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Description: Has the data about dog and owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} Dog;

#define struct dog dog_t
#endif
