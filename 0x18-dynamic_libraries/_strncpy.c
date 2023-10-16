#include <stddef.h>

/**
 * _strncpy - copies up to n characters from one string to another
 * @dest: the destination string
 * @src: the string to be copied
 * @n: the maximum number of characters to be copied
 * Return: a pointer to the destination string @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (dest_start);
}

