#include <stddef.h>

/**
 * _strcat - concatenates two stings
 * @dest: the destination sting
 * @src: the string to be concatenated
 * Return: a pointer to the destination string @dest
 */
char *_strcat(char *dest, char *src)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_start);
}

