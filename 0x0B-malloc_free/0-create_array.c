#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 *create_array - writes an array of chars, initializes to a specific char.
 * @size: size of array
 * @c: The charater to initialize the array with.
 *
 * Return: if succesful, returns a pointer or Null if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}

