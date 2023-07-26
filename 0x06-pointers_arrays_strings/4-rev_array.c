#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements in the array.
 *
 * Return: Nothing (void).
 */
void reverse_array(int *a, int n)
{
	int temp, start = 0, end = n - 1;

	while (start < end)
	{
		/* Swap the elements at the start and end positions */
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		/* Move the start and end positions towards each other */
		start++;
		end--;
	}
}

