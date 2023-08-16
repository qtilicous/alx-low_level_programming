#include <stddef.h>

int int_index(int *array, int size, int (*cmp)(int));

/**
 * int_index - Searches for an integer.
 * @array: Pointer to the array.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the function used to compare values.
 *
 * Return: Index of the first element which the cmp function does not return 0.
 *         If no element matches, return -1.
 *         If size is <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}

