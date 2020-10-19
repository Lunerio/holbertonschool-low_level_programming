#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - init struc function
 * @d: pointer to struct
 * @name: pointer to char
 * @age: pointer to int
 * @owner: pointer to char
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
