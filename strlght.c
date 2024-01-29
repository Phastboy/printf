#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;

	return (i);
}

/**
 * _strlenc - returns the length of a string for constant strings pointers
 * @s: string
 * Return: length of string
 */

int _strlenc(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;

	return (i);
}
