#include <stddef.h>

/**
 * _memset - fills the first n byte of memory to by s with the constant byte b
 * @s: The pointer to the memory area.
 * @b: The constant byte to fill the memory with.
 * @n: The number of bytes to fill
 * Return: The pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (s);
}

