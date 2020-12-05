#include "holberton.h"

/**
 * is_palindrome - checks if string is palindrome
 * @s: string to analyze
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len;

	if (*s == '\0') /*on empty string*/
	{
		return (1);
	}

	len = str_count(s); /*get string length*/
	return (rec_pal(s, len - 1, 0));
}

/**
 * str_count - recursive version of strlen
 * @s: string to get length from
 * Return: chars count
 */

int str_count(char *s)
{
	int len = 0;

	if (*s == '\0') /*base case*/
	{
		return (0);
	}
	len += str_count(s + 1) + 1; /*add 1 to length*/
	return (len); /*when finishes the recursion gets the len*/
}

/**
 * rec_pal - recursive function to analyze each char
 * @s: string
 * @len: length from string, to get last index
 * @init: first index from string
 * Return: 1 if palindrome, 0 otherwise
 */

int rec_pal(char *s, int len, int init)
{
	if (init >= len) /*base case if palindrome*/
	{
		return (1);
	}
	if (init < len && s[init] == s[len]) /*condition to make recursion*/
	{
		return (rec_pal(s, len - 1, init + 1));
	}

	else /*return 0 if two chars from the recursion are not the same*/
	{
		return (0);
	}
}
