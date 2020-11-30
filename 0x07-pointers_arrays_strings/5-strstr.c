#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - looks for first occurrence of substring.
 * @haystack: original string.
 * @needle: substring to find.
 * Return: pointer to the first occurrence. NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (; haystack[i] != '\0'; haystack++) /*loop to move pointer*/
	{
		for (i = 0; haystack[i] == needle[i]; i++)
		{/*loop to get to end of needle while same as haystack*/
		}
		if (needle[i] == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
