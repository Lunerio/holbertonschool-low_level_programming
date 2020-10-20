#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the memory of the new dog
 * @d: pointer to the information in dog_t
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
