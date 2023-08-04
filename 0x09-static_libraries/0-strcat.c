#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to append to.
 * @src: The source string to copy from.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;
	char *src_ptr = src;

	/* Find the end of the destination string */
	while (*dest_ptr != '\0')
		dest_ptr++;

	/* Concatenate the source string to the destination string */
	while (*src_ptr != '\0')
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
	}

	/* Add the null-terminating byte */
	*dest_ptr = '\0';

	return (dest);
}

