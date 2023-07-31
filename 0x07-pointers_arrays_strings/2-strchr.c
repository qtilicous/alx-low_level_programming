#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: Pointer to the string to search.
 * @c: The character to locate.
 *
 * Return: First occurrence of the character @c in the string @s,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		return (s);
		s++;
	}

	/* If the character is not found, return NULL */
	return (NULL);
}

