#include <stdio.h>

/**
 * _strcpy - copies a string to a destination buffer
 * @dest: the destination buffer
 * @src: the string to be copied
 * Return: a pointer to the destination buffer @dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (src != '\0')
	{
		*dest = *src;

		dest++;
		src++;
	}

	*dest = '\0' /* add null terminator to the string */

	return (dest_start);
}

