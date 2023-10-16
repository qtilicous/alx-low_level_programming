#include <stddef.h>

/**
 * _strstr - Locates a substring in another string
 * @haystack: The string to search in
 * @needle: The substring to search for
 * Return: A pointer to the beginning of the located substring.
 * or Null if nothing found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *s)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}

