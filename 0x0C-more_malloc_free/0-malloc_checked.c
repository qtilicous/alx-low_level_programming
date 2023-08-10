#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocates a memory
 * @b: the number of bytes to allocate
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}

