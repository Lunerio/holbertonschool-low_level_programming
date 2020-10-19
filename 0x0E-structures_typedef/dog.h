#ifndef DOG
#define DOG


/**
 * struct dog - data about dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Description: Has the data about dog and owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

typedef struct dog dog_t;
#endif
