#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - add information to struct
 * @name: pointer to char
 * @age: float
 * @owner: pointer to char
 * Return: normal
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *namecp;
	char *ownercp;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	namecp = strdup(name);
	if (namecp == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	ownercp = strdup(owner);
	if (ownercp == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	(*new_dog).name = namecp;
	(*new_dog).owner = ownercp;
	(*new_dog).age = age;
	return (new_dog);
}
