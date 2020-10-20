#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - duplicate string
 * @str: pointer to str
 *Return: return pointer to malloc
 */

char *_strdup(char *str)
{
	char *s;
	int i;
	int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != 0; i++)
	{
		size++;
	}

	s = malloc(size * sizeof(char) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= size; i++)
	{
		s[i] = str[i];
	}

	return (s);
}

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

	namecp = _strdup(name);
	if (namecp == NULL)
	{
		free(namecp);
		free(new_dog);
		return (NULL);
	}

	ownercp = _strdup(owner);
	if (ownercp == NULL)
	{
		free(namecp);
		free(ownercp);
		free(new_dog);
		return (NULL);
	}

	(*new_dog).name = namecp;
	(*new_dog).owner = ownercp;
	(*new_dog).age = age;
	return (new_dog);
}
