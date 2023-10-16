#include <stddef.h>

/**
 * _strpbrk - Searches for a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The string containing characters to be searched
 * Return: A pointer to the first occurence in @s of any characters in @accept,
 * or NULL if nothing is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *temp = accept;

		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return (s);
			}

			temp++;
		}

		s++;
	}

	return (NULL);
}

