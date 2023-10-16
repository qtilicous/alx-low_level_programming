#include <stddef.h>

/**
 * _strncat - concatenates one string to another
 * @dest: the destination string
 * @src: the source string to be concatenated
 * @n: the maximum number of characters to concatenate
 * Return: a pointer to the destination string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (dest_start);
}

