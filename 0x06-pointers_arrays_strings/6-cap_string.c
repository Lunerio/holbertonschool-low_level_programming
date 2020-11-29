#include "holberton.h"
#include <stdio.h>

int c_check(char s_index);

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (c_check(s[i]) == 0)
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
}

/**
 * c_check - check if separator
 * @s_index: index from string
 * Return: 0 if separator, 1 if not
 */

int c_check(char s_index)
{
	if (s_index == ',' || s_index == ';' || s_index == '.' ||
	    s_index == '!' || s_index ==  '?' || s_index ==  '"' ||
	    s_index == '(' || s_index == ')' || s_index == '{' ||
	    s_index ==  '}' || s_index == ' ' || s_index == '\n' ||
	    s_index == '\t')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
