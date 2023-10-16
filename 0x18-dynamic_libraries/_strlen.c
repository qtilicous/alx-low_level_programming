#include <stddef.h>

/**
 * _strlen - counts the length of a string
 * @s: the string whose length to be counted
 * Return: the length of the string @s
 */
int _strlen(char *s)
{
	int length = 0;

	while (s && s[length] != '\0')
	{
		length++;
	}

	return (length);
}

