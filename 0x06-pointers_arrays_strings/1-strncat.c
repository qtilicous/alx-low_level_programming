#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes from src.
 * @dest: The destination string to append to.
 * @src: The source string to copy from.
 * @n: The maximum number of bytes to copy from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;
	char *src_ptr = src;

	/* Find the end of the destination string */
	while (*dest_ptr != '\0')
		dest_ptr++;

	/* Concatenate the source string to the destination string up to n bytes */
	while (*src_ptr != '\0' && n > 0)
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
		n--;
	}

	/* Add the null-terminating byte */
	*dest_ptr = '\0';

	return (dest);
}

