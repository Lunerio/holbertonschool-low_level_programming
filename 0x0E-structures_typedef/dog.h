#ifndef DOG
#define DOG
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
